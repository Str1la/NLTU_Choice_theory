#include "MatrixRelation.h"
#include "MetricMatrixRelation.h"
// ����������� �� �������������
MatrixRelation::MatrixRelation() : row(3), col(3)
{
	matrix = gcnew array<array<int>^>(row);
	for (int i = 0; i < row; ++i) {
		matrix[i] = gcnew array<int>(col);
		for (int j = 0; j < col; ++j) {
			matrix[i][j] = 0;
		}
	}
}
// ����������� � �����������
MatrixRelation::MatrixRelation(int row, int col) : row(row), col(col) {

	matrix = gcnew array<array<int>^>(row);
	for (int i = 0; i < row; ++i)
	{
		matrix[i] = gcnew array<int>(col);
		for (int j = 0; j < col; ++j)
		{
			matrix[i][j] = 0;
		}
	}
}
// ��������� ����� �������
MatrixRelation^ MatrixRelation::createEmptyRelation(int row, int col)
{
	MatrixRelation^ fullRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j) {
			fullRelation->matrix[i][j] = 0;
		}
	}

	return fullRelation;
}
// ��������� ������� ������� row x col, ��������� ���������.
MatrixRelation^ MatrixRelation::createFullrelation(int row, int col)
{
	MatrixRelation^ fullRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j) {
			fullRelation->matrix[i][j] = 1;
		}
	}

	return fullRelation;
}
// ��������� ���������� ������� ������� row x col, � ��������� �� ������� �������.
MatrixRelation^ MatrixRelation::createDiagonalRelation(int row, int col)
{
	MatrixRelation^ diagonalRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		diagonalRelation->matrix[i][i] = 1;
	}

	return diagonalRelation;
}
// ��������� �������� ���������� ������� ������� row x col, �� �������� ���� �������� ��������� ��������� �������.
MatrixRelation^ MatrixRelation::createAntiDiagonalRelation(int row, int col) {
	MatrixRelation^ antiDiagonalRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		antiDiagonalRelation->matrix[i][i] = 0;
		for (int j = 0; j < col; j++) {
			if (i != j)
				antiDiagonalRelation->matrix[i][j] = 1;
		}
	}

	return antiDiagonalRelation;
}
// ����������� �����������, �� ������� ���� ���� �������.
MatrixRelation::MatrixRelation(MatrixRelation^ other) : row(other->row),col(other->col)
{
	matrix = gcnew array<array<int>^>(row);
	for (int i = 0; i < row; ++i) {
		matrix[i] = gcnew array<int>(col);
		for (int j = 0; j < col; ++j) {
			matrix[i][j] = other->matrix[i][j];
		}
	}
}
// �����, �� �������� ������� ���� �������."�������" (������� �������� ��������� ��������). 1+1=1, 1+0=0, 0+0=0
Relation^ MatrixRelation::intersection(Relation^ other) {
	MatrixRelation^ otherMatrixRelation = safe_cast<MatrixRelation^>(other);
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			resultRelation->matrix[i][j] = Math::Min(matrix[i][j], otherMatrixRelation->matrix[i][j]);
		}
	}

	return resultRelation;
}
// �����, �� �������� ��'������� ���� �������. 1+1=1, 1+0=1, 0+0=0
Relation^ MatrixRelation::unionOperation(Relation^ other)
{
	MatrixRelation^ otherMatrixRelation = safe_cast<MatrixRelation^>(other);
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			resultRelation->matrix[i][j] = Math::Max(this->matrix[i][j], otherMatrixRelation->matrix[i][j]);
		}
	}

	return resultRelation;
}
//�������� ������ �� ����� ��������� (�������� ����� �������, ���� ���� � �����).
Relation^ MatrixRelation::difference(Relation^ other) {
	MatrixRelation^ otherMatrixRelation = safe_cast<MatrixRelation^>(other);
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			resultRelation->matrix[i][j] = matrix[i][j] && !otherMatrixRelation->matrix[i][j];
		}
	}

	return resultRelation;
}
//�������� ���������� ������ ���� �������(��������, �� � � ���� � �������, ��� �� � ����).
Relation^ MatrixRelation::symmetricDifference(Relation^ other) {
	MatrixRelation^ otherMatrixRelation = safe_cast<MatrixRelation^>(other);
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			resultRelation->matrix[i][j] = (matrix[i][j] && !otherMatrixRelation->matrix[i][j]) ||
				(otherMatrixRelation->matrix[i][j] && !matrix[i][j]);
		}
	}

	return resultRelation;
}
//�������� ���������� ������� (������� �������� ��������: 0 ��� 1, 1 ��� 0).
Relation^ MatrixRelation::complement() {
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			resultRelation->matrix[i][j] = 1 - matrix[i][j];
		}
	}

	return resultRelation;
}
//�������� ������������� ������� (���� ������ ����� � �������).
Relation^ MatrixRelation::inverse() {
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			resultRelation->matrix[i][j] = matrix[j][i];
		}
	}

	return resultRelation;
}
//�������� ���������� ���� �������(�������� �������� � ������������� ������� ��������).
Relation^ MatrixRelation::composition(Relation^ other) {
	MatrixRelation^ otherMatrixRelation = safe_cast<MatrixRelation^>(other);
	MatrixRelation^ resultRelation = gcnew MatrixRelation(row, otherMatrixRelation->col);

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < otherMatrixRelation->col; ++j) {
			resultRelation->matrix[i][j] = false;
			for (int k = 0; k < col; ++k) {
				resultRelation->matrix[i][j] = resultRelation->matrix[i][j] || (matrix[i][k] && otherMatrixRelation->matrix[k][j]);
			}
		}
	}

	return resultRelation;
}


// �������� ����� K � ����������� ������� Q � R (�������� ��������� R, ���� ������ ���������� � Q � ������ � �������������� R)
MatrixRelation^ MatrixRelation::calculateExpressionK(MatrixRelation^ Q, MatrixRelation^ R) {
	MatrixRelation^ Rd = ConvertToMatrixRelation(R->calculateDualRelation(), 0);
	MatrixRelation^ compositionPQ = ConvertToMatrixRelation(this->composition(Q), 0);
	MatrixRelation^ resultK = ConvertToMatrixRelation(compositionPQ->difference(Rd), 0);

	return resultK;
}
// ��������, �� � ������� ������������� (�� �������� �� ������� � 0 ��� 1, � ������� � �����������)
bool MatrixRelation::isConsistent()
{
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (i == j && (matrix[i][j] != 0 && matrix[i][j] != 1)) {
				return false;
			}
			if (i != j && matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}
// �������� ������� �� ����� ���������, � ��������� ���������� �����������
double MatrixRelation::calculateDistance(Relation^ other, bool isCoordinated)
{
	const MatrixRelation^ otherMatrix = safe_cast<const MatrixRelation^>(other);

	int n = row;
	double totalDistance = 0.0;

	if (isCoordinated) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				totalDistance += std::abs(matrix[i][j] - otherMatrix->matrix[i][j]);
			}
		}
	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				totalDistance += std::abs(matrix[i][j] - otherMatrix->matrix[i][j]) +
					std::abs(matrix[j][i] - otherMatrix->matrix[j][i]);
			}
		}
		totalDistance /= 2;
	}

	return totalDistance;
}
// ������� ������� �� ����� �������������
// ������� �������� ��'������� �����, �� ����� ����� ��������
std::vector<std::vector<int>> MatrixRelation::splitIntoClasses()
{
	std::vector<std::vector<int>> classes;

	for (int i = 0; i < row; ++i)
	{
		bool found = false;

		for (auto& cls : classes)
		{
			if (isEqualRow(cls[0], i))
			{
				cls.push_back(i);
				found = true;
				break;
			}
		}

		if (!found)
		{
			std::vector<int> newClass;
			newClass.push_back(i);
			classes.push_back(newClass);
		}
	}
	return classes;
}

//����������� �������� �� �������
std::vector<std::vector<int>> intersectClasses(std::vector<std::vector<int>>& firstClasses, std::vector<std::vector<int>>& secondClasses)
{
	std::vector<std::vector<int>> intersection;
	for (auto& cls1 : firstClasses)
	{
		for (auto& cls2 : secondClasses)
		{
			std::vector<int> commonElements;
			std::set_intersection(cls1.begin(), cls1.end(), cls2.begin(), cls2.end(), std::back_inserter(commonElements));

			if (!commonElements.empty())
			{
				intersection.push_back(commonElements);
			}
		}
	}
	return intersection;
}


bool MatrixRelation::isEqualRow(int idx1, int idx2)
{
	for (int j = 0; j < col; ++j)
	{
		if (matrix[idx1][j] != matrix[idx2][j])
		{
			return false;
		}
	}
	return true;
}

//�������� �����
std::vector<int> countClasses(std::vector<std::vector<int>>& Pi, std::vector<std::vector<int>>& intersection)
{
	std::vector<int> subclassCounts;
	for (auto& cls1 : Pi)
	{
		int i = 0;
		for (auto& it1 : cls1)
		{
			for (auto& cls2 : intersection)
			{
				for (auto& it2 : cls2)
				{
					if (it1 == it2)
					{
						i++;
						break;
					}
					break;
				}
			}

		}
		subclassCounts.push_back(i);
	}
	return subclassCounts;
}

int findMaxIntersectionSize(const std::vector<int>& Pi, const std::vector<int>& Rj) {
	std::vector<int> intersection;
	std::set_intersection(Pi.begin(), Pi.end(), Rj.begin(), Rj.end(), std::back_inserter(intersection));
	return intersection.size();
}

// ������� ������� ��� ���������� ������ ������������ �������� ��� ������� ������� � P
std::vector<int> calculateMaxIntersectionSizes(const std::vector<std::vector<int>>& P, const std::vector<std::vector<int>>& R) {
	std::vector<int> maxIntersectionSizes;

	for (const auto& Pi : P) {
		int maxIntersectionSize = 0;

		for (const auto& Rj : R) {
			int currentIntersectionSize = findMaxIntersectionSize(Pi, Rj);
			if (currentIntersectionSize > maxIntersectionSize) {
				maxIntersectionSize = currentIntersectionSize;
			}
		}

		maxIntersectionSizes.push_back(maxIntersectionSize);
	}

	return maxIntersectionSizes;
}


// �������� ������� ������������� �� ����� ���������
double MatrixRelation::EquivalenceCalculateDistance(MatrixRelation^ other)
{
	double result = 0.0;
	std::vector<std::vector<int>> firstClasses = this->splitIntoClasses();
	std::vector<std::vector<int>> secondClasses = other->splitIntoClasses();

	std::vector<std::vector<int>> intersectionClasses = intersectClasses(firstClasses, secondClasses);

	std::vector<int> P1_counts = countClasses(firstClasses, intersectionClasses);
	std::vector<int> P2_counts = countClasses(secondClasses, intersectionClasses);

	std::vector<int> intersectionSizesP1 = calculateMaxIntersectionSizes(firstClasses, intersectionClasses);
	std::vector<int> intersectionSizesP2 = calculateMaxIntersectionSizes(secondClasses, intersectionClasses);

	for (size_t i = 0; i < firstClasses.size(); ++i)
	{
		int sizeP1 = firstClasses[i].size();
		int intersectionSizeP1 = intersectionSizesP1[i];
		int countP1 = P1_counts[i];

		result += 2 * (sizeP1 - intersectionSizeP1) - countP1 + 1;
	}

	for (size_t i = 0; i < secondClasses.size(); ++i)
	{
		int sizeP2 = secondClasses[i].size();
		int intersectionSizeP2 = intersectionSizesP2[i];
		int countP2 = P2_counts[i];

		result += 2 * (sizeP2 - intersectionSizeP2) - countP2 + 1;
	}
	return result;
}

Relation^ MatrixRelation::calculateDualRelation() {
	MatrixRelation^ dualRelation = gcnew MatrixRelation(row, col);
	MatrixRelation^ inverseRelation = ConvertToMatrixRelation(this->inverse(), 0);
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			dualRelation->matrix[i][j] = 1 - inverseRelation->matrix[i][j];
		}
	}
	return dualRelation;
}


MatrixRelation^ MatrixRelation::operator=(MatrixRelation^ other) {
	if (this == other)
	{
		return this;
	}
	row = other->row;
	col = other->col;
	matrix = gcnew array<array<int>^>(row);
	for (int i = 0; i < row; ++i) {
		matrix[i] = gcnew array<int>(col);
		for (int j = 0; j < col; ++j) {
			matrix[i][j] = other->matrix[i][j];
		}
	}
	return this;
}

MatrixRelation^ MatrixRelation::ConvertToMatrixRelation(Relation^ other, bool type) {
	if (!type)
	{
		MatrixRelation^ otherMatrixRelation = dynamic_cast<MatrixRelation^>(other);
		if (!otherMatrixRelation) { return nullptr; }
		return otherMatrixRelation;
	}
	else
	{
		MetricMatrixRelation^ otherMetricMatrixRelation = dynamic_cast<MetricMatrixRelation^>(other);
		if (!otherMetricMatrixRelation) { return nullptr; }
		return otherMetricMatrixRelation;
	}
}



int MatrixRelation::getRow() {
	return row;
}
int MatrixRelation::getCol() {
	return col;
}

double MatrixRelation::getElement(int i, int j) {
	if (i >= 0 && i < row && j >= 0 && j < col) {
		return matrix[i][j];
	}
	else {
		Console::WriteLine("Invalid indices for matrix element.");
		return -1;
	}
}

void MatrixRelation::setElement(int i, int j, int value) {
	if (i >= 0 && i < row && j >= 0 && j < col) {
		matrix[i][j] = value;
	}
	else {
		Console::WriteLine("Invalid indices for matrix element.");
	}
}

bool MatrixRelation::isReflexive()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		if (matrix[i][i] != 1) {
			result = false;
		}
	}
	return result;
}

bool MatrixRelation::isAntiReflexive()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		if (matrix[i][i] != 0) {
			result = false;
		}
	}
	return result;
}

bool MatrixRelation::isSymmetric()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (matrix[i][j] != matrix[j][i]) {
				result = false;
			}
		}
	}
	return result;
}

bool MatrixRelation::isAsymmetric()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (matrix[i][j] == 1 && matrix[j][i] == 1) {
				result = false;
			}
		}
	}
	return result;
}

bool MatrixRelation::isAntisymmetric()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (matrix[i][j] == 1 && i != j && matrix[j][i] == 1) {
				result = false;
			}
		}
	}
	return result;
}

bool MatrixRelation::isTransitive()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			for (int k = 0; k < row; ++k) {
				if (matrix[i][j] == 1 && matrix[j][k] == 1 && matrix[i][k] != 1) {
					result = false;
				}
			}
		}
	}
	return result;
}

bool MatrixRelation::isAcyclic()
{
	bool result = true;
	for (int i = 0; i < row; ++i) {
		if (matrix[i][i] == 1) {
			result = false;
		}
	}
	return result;
}

bool MatrixRelation::isLinear()
{
	return isReflexive() && isAntisymmetric() && isTransitive();
}

bool MatrixRelation::isTolerance()
{
	return isReflexive() && isSymmetric();
}

bool MatrixRelation::isEquivalence()
{
	return isReflexive() && isSymmetric() && isTransitive();
}

bool MatrixRelation::isQuasiOrder()
{
	return isReflexive() && isTransitive();
}

bool MatrixRelation::isOrder()
{
	return isAntisymmetric() && isReflexive() && isTransitive();
}

bool MatrixRelation::isStrictOrder()
{
	return isAsymmetric() && isTransitive();
}

bool MatrixRelation::isLinearOrder()
{
	return isAntisymmetric() && isReflexive() && isTransitive() && isLinear();
}

bool MatrixRelation::isStrictLinearOrder()
{
	return isAsymmetric() && isReflexive() && isTransitive() && isLinear();
}

Relation^ MatrixRelation::findSymmetricComponent()
{
	MatrixRelation^ symmetricComponent = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (matrix[i][j] == 1 && matrix[j][i] == 1)
			{
				symmetricComponent->setElement(i, j, 1);
			}
		}
	}

	return symmetricComponent;
}

Relation^ MatrixRelation::findAsymmetricComponent()
{
	MatrixRelation^ asymmetricComponent = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (matrix[i][j] == 1 && matrix[j][i] != 1)
			{
				asymmetricComponent->setElement(i, j, 1);
			}
		}
	}

	return asymmetricComponent;
}

Relation^ MatrixRelation::findTransitiveClosure()
{
	for (int k = 0; k < row; ++k)
	{
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				this->setElement(i, j, this->getElement(i, j) || (this->getElement(i, k) && this->getElement(k, j)));
			}
		}
	}

	return this;
}

Relation^ MatrixRelation::reach()
{
	int row = this->getRow();
	int col = this->getCol();
	MatrixRelation^ diagonalMatrix = gcnew MatrixRelation(row, col);

	for (int i = 0; i < row; ++i)
	{
		diagonalMatrix->matrix[i][i] = 1;
	}

	this->findTransitiveClosure();
	diagonalMatrix->unionOperation(this);

	return  diagonalMatrix->unionOperation(this);

}

Relation^ MatrixRelation::mutualReach()
{
	int row = this->getRow();
	int col = this->getCol();

	MatrixRelation^ reachMatrix = gcnew MatrixRelation(row, col);
	MatrixRelation^ reachInverseMatrix = gcnew MatrixRelation(row, col);

	reachMatrix = reachMatrix->ConvertToMatrixRelation(this->reach(), 0);
	reachInverseMatrix = reachInverseMatrix->ConvertToMatrixRelation(reachMatrix->inverse(), 0);

	return reachMatrix->intersection(reachInverseMatrix);
}

std::vector<int> MatrixRelation::findMaximums() {
	std::vector<int> maximums;

	for (int i = 0; i < row; ++i) {
		bool isMaximum = true;
		for (int j = 0; j < col; ++j) {
			if (matrix[i][j] == 0) {
				isMaximum = false;
				break;
			}
			
		}
		
		if (isMaximum) {
			maximums.push_back(i);
		}
	}

	return maximums;
}

std::vector<int> MatrixRelation::findMajors() {
	std::vector<int> majors;
	MatrixRelation^ temp = gcnew MatrixRelation(this->ConvertToMatrixRelation(this->complement(), 0));

	for (int i = 0; i < row; ++i) {
		bool isMajor = true;
		for (int j = 0; j < col; ++j) {
			if (temp->matrix[j][i] == 0) {
				isMajor = false;
				break;
			}
		}
		if (isMajor) {
			majors.push_back(i);
		}
	}

	return majors;
}

std::vector<int> MatrixRelation::findMinimums() {
	std::vector<int> minimums;

	for (int i = 0; i < row; ++i) {
		bool isMinimum = true;
		for (int j = 0; j < col; ++j) {
			if (matrix[j][i] == 0) {
				isMinimum = false;
				break;
			}
		}
		if (isMinimum) {
			minimums.push_back(i);
		}
	}

	return minimums;
}

std::vector<int> MatrixRelation::findMinors() {
	std::vector<int> minors;
	MatrixRelation^ temp = gcnew MatrixRelation(this->ConvertToMatrixRelation(this->complement(), 0));

	for (int i = 0; i < row; ++i) {
		bool isMinor = true;
		for (int j = 0; j < col; ++j) {
			if (temp->matrix[i][j] == 0) {
				isMinor = false;
				break;
			}
		}
		if (isMinor) {
			minors.push_back(i);
		}
	}

	return minors;
}


