#include "MetricMatrixRelation.h"


MetricMatrixRelation::MetricMatrixRelation() : MatrixRelation()
{
	metrics = gcnew array<array<double>^>(row);
	for (int i = 0; i < row; ++i)
	{
		metrics[i] = gcnew array<double>(col);
		for (int j = 0; j < col; ++j)
		{
			metrics[i][j] = 0.0;
		}
	}
}

MetricMatrixRelation::MetricMatrixRelation(int row, int col) : MatrixRelation(row, col)
{
	this->row = row;
	this->col = col;
	metrics = gcnew array<array<double>^>(row);
	for (int i = 0; i < row; ++i)
	{
		metrics[i] = gcnew array<double>(col);
		for (int j = 0; j < col; ++j)
		{
			metrics[i][j] = 0.0;
		}
	}
}

MetricMatrixRelation::MetricMatrixRelation(MatrixRelation^ other)
{
	this->row = other->getRow();
	this->col = other->getCol();
	metrics = gcnew array<array<double>^>(row);
	for (int i = 0; i < row; ++i)
	{
		metrics[i] = gcnew array<double>(col);
		for (int j = 0; j < col; ++j)
		{
			metrics[i][j] = other->getElement(i, j);
		}
	}
}


double MetricMatrixRelation::getElement(int i, int j)
{
	if (i >= 0 && i < row && j >= 0 && j < col)
		return metrics[i][j];
}

void MetricMatrixRelation::setElement(int i, int j, double value)
{
	if (i >= 0 && i < row && j >= 0 && j < col)
		metrics[i][j] = value;
}


Relation^ MetricMatrixRelation::unionOperation(Relation^ other)
{
	MetricMatrixRelation^ otherMetricRelation = safe_cast<MetricMatrixRelation^>(other);
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, col);
	RelationType thisType = DetermineRelationType(this);
	RelationType otherType = DetermineRelationType(otherMetricRelation);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (metrics[i][j] == 0 && otherMetricRelation->metrics[i][j] != 0)
			{
				resultRelation->metrics[i][j] = otherMetricRelation->metrics[i][j];
			}
			else if (metrics[i][j] != 0 && metrics[i][j] == 0)
			{
				resultRelation->metrics[i][j] = otherMetricRelation->metrics[i][j];
			}
			else if (metrics[i][j] != 0 && otherMetricRelation->metrics[i][j] != 0)
			{
				if (thisType == RelationType::Multiplicative && otherType == RelationType::Multiplicative)
					resultRelation->metrics[i][j] = sqrt(metrics[i][j] * otherMetricRelation->metrics[i][j]);
				if (thisType == RelationType::Additive && otherType == RelationType::Additive)
					resultRelation->metrics[i][j] = (metrics[i][j] + otherMetricRelation->metrics[i][j]) / 2.0;
				else
				{
					MatrixRelation^ matrixrelation = gcnew MatrixRelation(this);
					resultRelation->ConvertToMatrixRelation(matrixrelation->unionOperation(otherMetricRelation), 1);
				}
			}
		}
	}

	return resultRelation;
}


Relation^ MetricMatrixRelation::intersection(Relation^ other)
{
	MetricMatrixRelation^ otherMetricRelation = safe_cast<MetricMatrixRelation^>(other);
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, col);
	RelationType thisType = DetermineRelationType(this);
	RelationType otherType = DetermineRelationType(otherMetricRelation);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (thisType == RelationType::Multiplicative && otherType == RelationType::Multiplicative)
				resultRelation->metrics[i][j] = sqrt(metrics[i][j] * otherMetricRelation->metrics[i][j]);
			if (thisType == RelationType::Additive && otherType == RelationType::Additive)
				resultRelation->metrics[i][j] = (metrics[i][j] + otherMetricRelation->metrics[i][j]) / 2.0;
			else
			{
				MatrixRelation^ matrixrelation = gcnew MatrixRelation(this);
				resultRelation->ConvertToMatrixRelation(matrixrelation->intersection(otherMetricRelation), 1);
			}

		}
	}

	return resultRelation;
}

Relation^ MetricMatrixRelation::difference(Relation^ other)
{
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{

			resultRelation->metrics[i][j] = this->metrics[i][j];
		}
	}

	return resultRelation;
}

Relation^ MetricMatrixRelation::symmetricDifference(Relation^ other)
{
	MetricMatrixRelation^ otherMetricRelation = safe_cast<MetricMatrixRelation^>(other);
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, otherMetricRelation->col);

	MatrixRelation^ matrixrelation = gcnew MatrixRelation(this);
	resultRelation->ConvertToMatrixRelation(matrixrelation->symmetricDifference(otherMetricRelation), 1);
	return resultRelation;
}

Relation^ MetricMatrixRelation::complement()
{
	RelationType thisType = DetermineRelationType(this);
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, col);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (thisType == RelationType::Multiplicative || thisType == RelationType::Additive)
			{
				resultRelation->metrics[i][j] = 1;
			}
			else
			{
				MatrixRelation^ matrixrelation = gcnew MatrixRelation(this);
				resultRelation->ConvertToMatrixRelation(matrixrelation->complement(), 1);
			}
		}
	}

	return resultRelation;
}



Relation^ MetricMatrixRelation::inverse()
{
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			resultRelation->metrics[i][j] = metrics[j][i];
		}
	}

	return resultRelation;
}

Relation^ MetricMatrixRelation::composition(Relation^ other)
{
	MetricMatrixRelation^ otherMetricRelation = safe_cast<MetricMatrixRelation^>(other);
	MetricMatrixRelation^ resultRelation = gcnew MetricMatrixRelation(row, otherMetricRelation->col);
	RelationType thisType = DetermineRelationType(this);
	RelationType otherType = DetermineRelationType(otherMetricRelation);

	int n = this->row;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int sum = 0;
			double prod = 1.0;
			if (thisType == RelationType::Multiplicative && otherType == RelationType::Multiplicative)
			{
				for (int k = 0; k < n; ++k)
				{
					prod *= metrics[i][k] * otherMetricRelation->metrics[k][j];
				}
				resultRelation->metrics[i][j] = pow(prod, 1.0 / n);
			}
			if (thisType == RelationType::Additive && otherType == RelationType::Additive)
			{
				for (int k = 0; k < n; ++k)
				{
					sum += (metrics[i][k] + otherMetricRelation->metrics[k][j]);
				}
				resultRelation->metrics[i][j] = sum / n;
			}
			else
			{
				MatrixRelation^ matrixrelation = gcnew MatrixRelation(this);
				resultRelation->ConvertToMatrixRelation(matrixrelation->composition(otherMetricRelation), 1);
			}
		}

	}
	return resultRelation;
}



int MetricMatrixRelation::getRow() {
	return row;
}
int MetricMatrixRelation::getCol() {
	return col;
}

RelationType  MetricMatrixRelation::DetermineRelationType(MetricMatrixRelation^ relation) {
	bool isAdditive = true;
	bool isMultiplicative = true;

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			for (int k = 0; k < col; ++k)
			{
				if (metrics[i][j] != 0 && metrics[j][k] != 0)
				{
					if (metrics[i][j] + metrics[j][k] != metrics[i][k])
						isAdditive = false;
					if (metrics[i][j] * metrics[j][k] != metrics[i][k])
						isMultiplicative = false;
				}


			}
		}
	}

	if (isAdditive && !isMultiplicative) {
		return RelationType::Additive;
	}
	else if (!isAdditive && isMultiplicative) {
		return RelationType::Multiplicative;
	}
	else {
		return RelationType::Unknown;
	}
}

bool MetricMatrixRelation::isConsistent()
{
	return MatrixRelation::isConsistent();
}

double MetricMatrixRelation::calculateDistance(Relation^ other, bool isCoordinated)
{
	MetricMatrixRelation^ otherMatrix = safe_cast<MetricMatrixRelation^>(other);

	int n = row;
	double totalDistance = 0.0;

	if (isCoordinated) {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				totalDistance += std::abs(metrics[i][j] - otherMatrix->metrics[i][j]);
			}
		}

	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				totalDistance += std::abs(metrics[i][j] - otherMatrix->metrics[i][j]) +
					std::abs(metrics[j][i] - otherMatrix->metrics[j][i]);
			}
		}
		totalDistance /= 2;
	}

	return totalDistance;
}

