#pragma once

public ref class Relation abstract
{
public:

	virtual ~Relation() {}

	virtual Relation^ intersection(Relation^ other) abstract;
	virtual Relation^ unionOperation(Relation^ other) abstract;
	virtual Relation^ difference(Relation^ other) abstract;
	virtual Relation^ symmetricDifference(Relation^ other) abstract;
	virtual Relation^ complement() abstract;
	virtual Relation^ inverse() abstract;
	virtual Relation^ composition(Relation^ other) abstract;
	virtual Relation^ calculateDualRelation() abstract;

	virtual double getElement(int row, int col)abstract;
	virtual int getRow() abstract;
	virtual int getCol() abstract;

	virtual bool isReflexive() abstract;
	virtual bool isAntiReflexive() abstract;
	virtual bool isSymmetric() abstract;
	virtual bool isAsymmetric() abstract;
	virtual bool isAntisymmetric() abstract;
	virtual bool isTransitive() abstract;
	virtual bool isAcyclic() abstract;
	virtual bool isLinear() abstract;

	virtual bool isTolerance() abstract;
	virtual bool isEquivalence() abstract;
	virtual bool isQuasiOrder() abstract;
	virtual bool isOrder() abstract;
	virtual bool isStrictOrder() abstract;
	virtual bool isLinearOrder() abstract;
	virtual bool isStrictLinearOrder() abstract;

	virtual Relation^ findSymmetricComponent() abstract;
	virtual Relation^ findAsymmetricComponent() abstract;
	virtual Relation^ findTransitiveClosure() abstract;
	virtual Relation^ reach() abstract;
	virtual Relation^ mutualReach() abstract;
	virtual Relation^ operator=(Relation^ other) { return this; }

	virtual bool isConsistent() abstract;
	virtual double calculateDistance(Relation^ other, bool isCoordinated) abstract;
};
