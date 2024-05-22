#pragma once
#include "MatrixRelation.h"
#include "Relation.h"

public enum class RelationType
{
    Additive,
    Multiplicative,
    Unknown
};

public ref class MetricMatrixRelation : public MatrixRelation
{
private:
    array<array<double>^>^ metrics;
    int row, col;

public:
    MetricMatrixRelation();
    MetricMatrixRelation(int row, int col);
    MetricMatrixRelation(MatrixRelation^ other);

    virtual double getElement(int i, int j) override;
    virtual void setElement(int i, int j, double value) override;
    virtual int getRow() override;
    virtual int getCol() override;

    virtual Relation^ unionOperation(Relation^ other) override;
    virtual Relation^ intersection(Relation^ other) override;
    virtual Relation^ difference(Relation^ other) override;
    virtual Relation^ symmetricDifference(Relation^ other) override;
    virtual Relation^ complement() override;
    virtual Relation^ inverse() override;
    virtual Relation^ composition(Relation^ other) override;

    RelationType DetermineRelationType(MetricMatrixRelation^ relation);

    virtual bool isConsistent() override;
    virtual double calculateDistance(Relation^ other, bool isCoordinated) override;
};
