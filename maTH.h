#include <vector>
#include <cmath>
#include <stdexcept>
#ifndef MATH_H
#define MATH_H

constexpr long double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
constexpr long double E = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
constexpr long double PHI = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890;
constexpr long double TAU = 0.61803398874989484820458683436563811772030917980576286213544862270526046281890;

int factorial(int n);
long long factorialL(int n);
int factorial_rec(int n);
std::vector<int> pascal(int n);
int combinations(int n, int k);
int combinationsWithRep(int n, int k);
int permutations(int n, int k);
int pow(int a, int n);
double pow(double a, int n);
double pow(int a, double n);
double pow(double a, double n);
int GCD(int a, int b);
int LCM(int a, int b);

template <typename ReturnType, typename T1 = ReturnType, typename T2 = T1>
ReturnType add(T1 a, T2 b) {
    return (ReturnType)a + (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2 = T1>
ReturnType subtract(T1 a, T2 b) {
    return (ReturnType)a - (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2 = T1>
ReturnType multiply(T1 a, T2 b) {
    return (ReturnType)a * (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2 = T1>
ReturnType divide(T1 a, T2 b) {
    return (ReturnType)a / (ReturnType)b;
}

template <typename returnType = double, typename T>
returnType sin(T x) {
    int terms = 10;
    // argument deduction
    x = fmod(x, PI); // Reduce x to the range of [-2pi, 2pi]
    if (x < -PI) {
        x += 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    else if (x > PI) {
        x -= 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    returnType result = 0;
    returnType term = x;
    returnType denom = 1;
    returnType sign = 1;
    for (int i = 1; i <= terms; ++i) {
        result += sign * (term / factorial(denom));
        term *= (x * x);
        denom += 2;
        sign *= -1;
    }
    return result;
}

template <typename returnType = double, typename T>
returnType cos(T x) {
    int terms = 10;
    // argument deduction
    x = fmod(x, 2 * PI); // Reduce x to the range of [-2pi, 2pi]
    if (x < -PI) {
        x += 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    else if (x > PI) {
        x -= 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    returnType result = 0;
    returnType term = 1;
    returnType denom = 0;
    returnType sign = 1;
    for (int i = 0; i < terms; ++i) {
        result += sign * (term / factorial(denom));
        term *= (x * x);
        denom += 2;
        sign *= -1;
    }
    return result;
}

template <typename returnType, typename T1 = returnType>
returnType ln(T1 x) {
    if (x <= 0) {
        throw std::runtime_error("Error: The natural logarithm is undefined for non-positive values.");
    }
    double log10 = 2.30258509299;
    returnType number = x;
    int exponent = 0;
    for (; number > 1; number /= 10) {
        exponent++;
    }
    number *= 10;
    exponent -= 1;
    double y = (number - 1) / (number + 1);
    int terms = 999;
    returnType result = 0;
    for (float n = 1; n <= terms; n++) {
        result += (1 / ((2 * n) - 1)) * (pow(y, ((2 * n) - 1)));
    }
    result *= 2;
    double koncni = ((exponent)*log10) + result;
    return (returnType)koncni;
}

template <typename returnType, typename T1, typename T2 = T1>
returnType log(T1 base, T2 argument) {
    if(argument <= 0){
        throw std::runtime_error("Error: Logarithm is undefined for non-positive values.");        
    }
    return (returnType)(ln<returnType>(argument) / ln<returnType>(base));
}

template <typename returnType, typename T1 = returnType>
returnType radToDeg(T1 rad) {
    return (returnType)(rad * (180 / PI));
}

template <typename returnType, typename T1 = returnType>
returnType degToRad(T1 deg) {
    return (returnType)(deg * (PI / 180));
}

template <typename returnType, typename T1 = returnType, typename T2 = T1>
returnType mod(T1 dividend, T2 divisor) {
    return (returnType)(dividend - (((int)(dividend / divisor)) * divisor));
}

template <typename returnType, typename T1 = returnType>
returnType abs(T1 val) {
    return val >= 0 ? (returnType)val : (returnType)(val * -1);
}

template <typename T1>
int floor(T1 x) {
    return x >= 0 ? (int)x : (int)(x - 1);
}

template <typename T1>
int ceil(T1 x) {
    return x >= 0 ? (int)(x + 1) : (int)x;
}

template <typename returnType, typename T1 = returnType, typename T2 = T1>
returnType root(T1 n, T2 a){ //n is the index (degree), a is the radicand
    if(n % 2 == 0 && a < 0 ){
        throw std::runtime_error("Error: The nth root function is undefined for non-positive values of even root indexes (degrees)");
    }
    returnType xk = a/2.0; //init. guess
    double te1 = ((double)(n-1)/n);
    double te2 = (double) a/n;
    for (int i = 0; i < 99; i++) {
        xk = (te1*xk) + (te2 * (1 / pow(xk, (int) (n - 1))));
    }
    return xk;    
}

template <typename returnType, typename T1 = returnType>
returnType exp(T1 x){
    returnType result = 0.0;
    for(int i = 0;i<21;i++){
        result += pow((double) x, (int) i) / factorialL(i);
    }
    return result;
}

template <typename returnType, typename T1 = returnType>
returnType tan(T1 x){
    //treba zmanjsat def. obmocje
    return (returnType) (sin<double>(x)/cos<double>(x));
}

template <typename returnType, typename T1 = returnType>
returnType arcsin(T1 x){
    //treba zmanjsat def. obmocje
    returnType result = 0;
    for(int i = 0;i<20;i++){
        int t3 = (2*i) + 1;
        result += (factorialL(2*i))/(pow((int) 4, (int) i) * (factorialL(i)*factorialL(i)) * (t3))*pow((double) x, (int) t3);
    }
    return result;
}

template <typename returnType, typename T1 = returnType>
returnType arccos(T1 x){
    return (returnType) ((PI/2) - arcsin<T1>(x));
}

template <typename returnType, typename T1 = returnType>
returnType arctan(T1 x){
    //treba zmanjsat def. obmocje    
    returnType result = 0;
    for(int i = 0;i<20;i++){
        int t2 = (2*i) + 1;
        result += ((pow(-1, i))/t2)*pow(x, t2);
    }
    return result;
}

template <typename returnType, typename T1 = returnType>
returnType sinh(T1 x){
    returnType result = 0;
    for(int i = 0;i<20;i++){
        int t = (2*i) + 1;
        result += ((pow(x, t))/factorialL(t));
    }
    return result;
}

template <typename returnType, typename T1 = returnType>
returnType cosh(T1 x){
    returnType result = 0;
    for(int i = 0;i<20;i++){
        int t = 2*i;
        result += ((pow(x, t))/factorialL(t));
    }
    return result;    
}

template <typename T1>
int round(T1 x){
    return (x - floor(x) < 0.5) ? floor(x) : ceil(x);
}

struct Binomial {
    int n;
    double p;

    Binomial(int n, double p){
        this->n = n;
        if(p >= 0 && p <= 1){
            this->p = p;
        }
        else{
            throw std::runtime_error("Error: Probability cannot be less than 0 or more than 1.");
        }
    }

    double E(){
        return n*p;
    }

    double D(){
        return n*p*(1-p);
    }

    double P(int k){ //P(X = k)
        if(k >= 0 && k <= n){
            return combinations(n, k) * pow(this->p, k)*pow((1-(this->p)), this->n - k); 
        }
        else{
            throw std::runtime_error("Error: The number of succesful trials cannot exceed the number of all trials or be less than 0.  ");
        }
    }

    double P_LT(int k){ //P(X < k)
        double sum = 0.0;
        for(int i = 0;i<k;i++){
            sum += this->P(i);
        }
        return sum;
    }

    double P_LTE(int k){ //P(X <= k)
        double sum = 0.0;
        for(int i = 0;i<=k;i++){
            sum += this->P(i);
        }
        return sum;
    }    

    double P_HT(int k){ //P(X > k) -> P(X <= k)
        return (double) (1 - this->P_LTE(k));
    }

    double P_HTE(int k){ //P(X >= k) -> P(X < k)
        return (double) (1 - this->P_LT(k));
    }
};

struct Poisson {
    double lambda;

    Poisson(double lambda){
        this->lambda = lambda;
    }

    double E(){
        return this->lambda;
    }

    double D(){
        return this->lambda;
    }

    double P(int k){ //P(X = k)
        if(k >= 0){
            return pow(exp<double>(1.0), this->lambda*(-1))*divide<double>(pow(this->lambda, k), factorial(k));
        }
        else{
            throw std::runtime_error("Error: Random variable cannot be less than 0.");
        }
    }

    double P_LT(int k){ //P(X < k)
        double sum = 0.0;
        for(int i = 0;i<k;i++){
            sum += this->P(i);
        }
        return sum;
    }

    double P_LTE(int k){ //P(X <= k)
        double sum = 0.0;
        for(int i = 0;i<=k;i++){
            sum += this->P(i);
        }
        return sum;
    }    

    double P_HT(int k){ //P(X > k) -> P(X <= k)
        return (double) (1 - this->P_LTE(k));
    }

    double P_HTE(int k){ //P(X >= k) -> P(X < k)
        return (double) (1 - this->P_LT(k));
    }    
};

struct Geometric {
    double p;

    Geometric(double p){
        if(p >= 0 && p <= 1){
            this->p = p;
        }
        else{
            throw std::runtime_error("Error: Probability cannot be less than 0 or more than 1.");            
        }
    }

    double E(){
        return divide<double>(1, this->p);
    }

    double D(){
        return divide<double>(1-(this->p), pow(this->p,2));
    }

    double P(int k){ //P(X = k)
        if(k >= 1){
            return this->p * pow(1-(this->p), k-1);
        }
        else{
            throw std::runtime_error("Error: Number of trials cannot be less than 1. ");
        }
    }

    double P_LT(int k){ //P(X < k)
        double sum = 0.0;
        for(int i = 0;i<k;i++){
            sum += this->P(i);
        }
        return sum;
    }

    double P_LTE(int k){ //P(X <= k)
        double sum = 0.0;
        for(int i = 0;i<=k;i++){
            sum += this->P(i);
        }
        return sum;
    }    

    double P_HT(int k){ //P(X > k) -> P(X <= k)
        return (double) (1 - this->P_LTE(k));
    }

    double P_HTE(int k){ //P(X >= k) -> P(X < k)
        return (double) (1 - this->P_LT(k));
    } 
};

struct Pascal {
    int r;
    double p;

    Pascal(int r, double p){
        this->r = r;
        if(p >= 0 && p <= 1){
            this->p = p;
        }
        else{
            throw std::runtime_error("Error: Probability cannot be less than 0 or more than 1.");
        }
    }

    double E(){
        return divide<double>(this->r, this->p);
    }

    double D(){
        return divide<double>(this->r *(1-(this->p)), pow(this->p,2));
    }

    double P(int k){ //P(X = k)
        if(k >= this->r){
            return combinations(k-1, (this->r) - 1) * pow(this->p, this->r)*pow((1-(this->p)), k - this->r); 
        }
        else{
            throw std::runtime_error("Error: Number of trials cannot be less than the number of required successful trials.");
        }
    }

    double P_LT(int k){ //P(X < k)
        double sum = 0.0;
        for(int i = 0;i<k;i++){
            sum += this->P(i);
        }
        return sum;
    }

    double P_LTE(int k){ //P(X <= k)
        double sum = 0.0;
        for(int i = 0;i<=k;i++){
            sum += this->P(i);
        }
        return sum;
    }    

    double P_HT(int k){ //P(X > k) -> P(X <= k)
        return (double) (1 - this->P_LTE(k));
    }

    double P_HTE(int k){ //P(X >= k) -> P(X < k)
        return (double) (1 - this->P_LT(k));
    }
};

struct Hypergeometric {
    int K;
    int N;
    int n;

    Hypergeometric(int K, int N, int n){
        this->K = K;
        this->N = N;
        this->n = n;
    }

    double E(){
        return divide<double>(this->n * this->K, this->N);
    }

    double D(){
        return this->n * divide<double>(this->K, this->N) * divide<double>(this->N - this->K, this->N) * divide<double>(this->N - this->n, this->N - 1);
    }

    double P(int k){ //P(X = k)
        if(k >= 0 && (k <= this->n || k <= this->K)){
            return divide<double>(combinations(this->K, k) * combinations((this->N) - (this->K), (this->n) - k), combinations(this->N, this->n)); 
        }
        else{
            throw std::runtime_error("Error: Number of successes in sample cannot be less than 0 or more than the sample size or more than the number of successes in population. ");
        }
    }

    double P_LT(int k){ //P(X < k)
        double sum = 0.0;
        for(int i = 0;i<k;i++){
            sum += this->P(i);
        }
        return sum;
    }

    double P_LTE(int k){ //P(X <= k)
        double sum = 0.0;
        for(int i = 0;i<=k;i++){
            sum += this->P(i);
        }
        return sum;
    }    

    double P_HT(int k){ //P(X > k) -> P(X <= k)
        return (double) (1 - this->P_LTE(k));
    }

    double P_HTE(int k){ //P(X >= k) -> P(X < k)
        return (double) (1 - this->P_LT(k));
    }    
};

struct Exponential {
    double lambda;

    Exponential(double lambda){
        this->lambda = lambda;
    }

    double E(){
        return divide<double>(1, this->lambda);
    }

    double D(){
        return divide<double>(1, pow(this->lambda, 2));
    }

    double P(double k){ //P(X = k)
        if(k >= 0){
            return 1 - pow(exp<double>(1.0), this->lambda*(-1) * k);
        }
        else{
            throw std::runtime_error("Error: Number of events cannot be less than 0. ");
        }
    } 
};

struct Uniform {
    double a;
    double b;

    Uniform(double a, double b){
        this->a = a;
        this->b = b;
    }

    double E(){
        return divide<double>(this->a + this->b, 2);
    }

    double D(){
        return divide<double>(pow(this->b - this->a, 2), 12);
    }

    double P(double k){ //P(X = k)
        if(k >= this->a && k <= this->b){
            return divide<double>(k - this->a, this->b - this->a);
        }
        else{
            throw std::runtime_error("Error: Given value cannot be anything outside of [a, b].");
        }
    }     
};

#endif