#ifndef NORMAL_CDF_POLICY
#define NORMAL_CDF_POLICY

class NormalCdfPolicy{
    public:
    NormalCdfPolicy();
    virtual ~NormalCdfPolicy() = default;
    // NormalCdfPolicy(double mean, double stddev);
    double Mean();
    double Stddev();
    virtual double N(double X) = 0;
    
    private:
    double mean;
    double stddev;
};

class BoostCdfPolicy: public NormalCdfPolicy{
    public:
    double N(double X);
    
};

class StdCdfPolicy: public NormalCdfPolicy{
    public:
    double N(double X);
    
};
#endif