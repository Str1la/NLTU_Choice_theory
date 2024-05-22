#pragma once
#include "Relation.h"
#include <vector>
#include <iterator>
#include <algorithm>
#include <Windows.h>
#include <unordered_map>
#include <unordered_set>
#include <list>
using namespace System;
using namespace System::Data;


public ref class MatrixRelation : public Relation
{
protected:
	array<array<int>^>^ matrix;
	int row,col;

public:
	MatrixRelation();
	MatrixRelation(int row, int col);
	
	MatrixRelation(MatrixRelation^ other);

	~MatrixRelation() override {}

	static MatrixRelation^ createEmptyRelation(int row, int col);
	static MatrixRelation^ createFullrelation(int row, int col);
	static MatrixRelation^ createDiagonalRelation(int row, int col);
	static MatrixRelation^ createAntiDiagonalRelation(int row, int col);


	virtual int getRow() override;
	virtual int getCol() override;
	virtual double getElement(int i, int j) override;
	virtual void MatrixRelation::setElement(int i, int j, int value);

	virtual Relation^ intersection(Relation^ other) override;
	virtual Relation^ unionOperation(Relation^ other) override;
	virtual Relation^ difference(Relation^ other) override;
	virtual Relation^ symmetricDifference(Relation^ other) override;
	virtual Relation^ complement() override;
	virtual Relation^ inverse() override;
	virtual Relation^ composition(Relation^ other) override;
	virtual Relation^ calculateDualRelation() override;


	virtual bool isReflexive() override;
	virtual bool isAntiReflexive() override;
	virtual bool isSymmetric() override;
	virtual bool isAsymmetric() override;
	virtual bool isAntisymmetric() override;
	virtual bool isTransitive() override;
	virtual bool isAcyclic() override;
	virtual bool isLinear() override;

	virtual bool isTolerance() override;
	virtual bool isEquivalence() override;
	virtual bool isQuasiOrder() override;
	virtual bool isOrder() override;
	virtual bool isStrictOrder() override;
	virtual bool isLinearOrder() override;
	virtual bool isStrictLinearOrder() override;

	virtual Relation^ findSymmetricComponent() override;
	virtual Relation^ findAsymmetricComponent() override;
	virtual Relation^ findTransitiveClosure() override;
	virtual Relation^ reach() override;
	virtual Relation^ mutualReach() override;

	MatrixRelation^ operator=(MatrixRelation^ other);
	MatrixRelation^ ConvertToMatrixRelation(Relation^ other, bool type);
	MatrixRelation^ calculateExpressionK(MatrixRelation^ Q, MatrixRelation^ R);

	virtual bool isConsistent() override;
	virtual double calculateDistance(Relation^ other, bool isCoordinated) override;

	std::vector<std::vector<int>> splitIntoClasses();
	bool MatrixRelation::isEqualRow(int idx1, int idx2);
	double EquivalenceCalculateDistance(MatrixRelation^ other);

	std::vector<int> findMaximums();
	std::vector<int> findMajors();
	std::vector<int> findMinimums();
	std::vector<int> findMinors();
};

