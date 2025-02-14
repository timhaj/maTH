#include <vector>
#include <cmath>
#include <stdexcept>
#ifndef MATH_H
#define MATH_H

constexpr long double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
constexpr long double E = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
constexpr long double PHI = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890;
constexpr long double TAU = 0.61803398874989484820458683436563811772030917980576286213544862270526046281890;
constexpr long double SQRT2 = 1.41421356237309504880168872420969807856967187537694807317667973799073247846210;
constexpr long double SQRT3 = 1.73205080756887729352744634150587236694281099955671765945648566923460348655620;
constexpr long double SQRT5 = 2.23606797749979693993751070481458195764395338149664850141091598752490422409912;
constexpr long double SILVER = 2.41421356237309504880168872420969807856967187537694807317667973888489203527614;
constexpr long double CUBE_ROOT_2 = 1.25992104989487316476721060727822835057025146549585371051031036711993343571865;
constexpr long double CUBE_ROOT_3 = 1.4422495703074083823216383107801096147132542293900559189199522836560301825332;
constexpr long double TWELFTH_ROOT_2 = 1.05946309435929526456182529474664701137973884254285863545920640590432963915084;
constexpr long double SUPERGOLDEN = 1.46557123187676802654884057973038286198202826421837504324189182424196427944653;
constexpr long double CONNECTIVE = 1.84775906502257351225636637879211515171601047363046274111625261468905840686933;
constexpr long double KEPLER_BOUWKAMP = 0.11494204485329620070387270533524336000367279736605441516553778876766032811152;
constexpr long double WALLIS = 2.09455148154232659148201907836769241027194326911027465129434724265144320268364;
constexpr long double LN_2 = 0.69314718055994530941723212145817656807550013436025525412068000949339362196969;
constexpr long double LEMNISCATE = 2.62205755429211981046483958938948823915431942870152031966052421424582329157571;
constexpr long double EULER_CONSTANT = 0.57721566490153286060651209008240243104215933593992359880576723488486228755685;
constexpr long double ERDOS_BORWEIN = 1.60669515241529176378330152319092475255021001715326411541229520027750732348319;
constexpr long double OMEGA = 0.56714329040978387299996866221035554975381578718651250813513181861810700584770;
constexpr long double APERY = 1.20205690315959428539973816151144999076498629234049888160015225826416326527883;
constexpr long double SOLDNER = 1.45136923488210415854250176402603238008928382349986728027353852810421918622631;
constexpr long double GAUSS = 0.83462684167407231339641844105298923711133915222693668824758121288573625496978;
constexpr long double SECOND_HERMITE = 1.15470053837925152901829756100391380573123845142355334569520914047014055077487;
constexpr long double LIOUVILLE = 0.110001000000000000000001000000000000000000000000000000000000001000000000000;
constexpr long double RAMANUJAN = 262537412640768743.999999999999250072597198185688879353328692828327861221888439;
constexpr long double GLAISHER_KINKELIN = 1.28242712910062263687534256886979172776768892732500119224769219100709001666520;
constexpr long double CATALAN = 0.91596559417721901505460351493238411077414937428167213426570994722206732169220;
constexpr long double DOTTIE = 0.73908513321516064165531208767387340401341175890067661138553615200261835060432;
constexpr long double MEISSEL_MERTENS = 0.26149721284764278375542683860869585905156664826139239899440543929856495280873;
constexpr long double UNIVERSAL_PARABOLIC = 2.29558714939263807403429804918949039120806636543676222570152016257441689396351;
constexpr long double CAHEN = 0.64341054628833802618225430775756476328658786067752812397437287626100196943840;
constexpr long double GELFOND = 23.14069263277926900572908636794854738026610624260021106686722067683817635363249;
constexpr long double GELFOND_SCHNEIDER = 2.66514414269022518865029724987313984827421131371410520193689151563714263620807;
constexpr long double SECOND_FAVARD = 1.23370055013616982735431137498451889191421242590509882830163960733011933542122;
constexpr long double GOLDEN_ANGLE = 2.39996322972865332223131419272433186105875148979201363120789827151263694437359;
constexpr long double SIERPINSKI = 2.58498175957925321706589358738317116058251533383660265434079364411551656057560;
constexpr long double LANDAU_RAMANUJAN = 0.76422365358922066299069873125009232811679054133488535114897310483471112356942;
constexpr long double GIESEKING = 1.01494160640965362502120255453057555179919756718256088677736425912254508589137;
constexpr long double BERNSTEIN = 0.28016949902386913303553288185202325231186928378835936972456359487330355057475;
constexpr long double TRIBONACCI = 1.83928675521416113255185256465328663360255146739538246322325041373601919739140;
constexpr long double BRUN = 1.90216058310495531818204287343264137131999314620223506097970452633610664737;
constexpr long double TWIN_PRIMES = 0.66016181584686957392781211001455577843262336028473341331920246861027708964778;
constexpr long double PLASTIC_RATIO = 1.32471795724474602596090885447809734073440405690173336430272569089951910224953;
constexpr long double PROUHET_THUE_MORSE = 0.41245403364010759778336136888997113062307893067290120032150163619500836546385;
constexpr long double GOLOMB_DICKMAN = 0.62432998854355087099293638310083724451574195623942817423990766043356485724809;
constexpr long double FELLER_TORNIER = 0.66131704946962233514759446016275910166609028134453444669504850439198827341889;
constexpr long double SALEM = 1.17628081825991750654407033893716628109907797460938805506521778085761868755630;
constexpr long double KHINCHIN = 2.68545200106530644530971483548179569382038229399446295305115234526648235719177;
constexpr long double LEVY_1 = 1.18656911041562545282;
constexpr long double LEVY_2 = 3.27582291872181115978;
constexpr long double COPELAND_ERDOS = 0.235711131719232931374143475359614171819232937414151617192232425293031;
constexpr long double MILLS = 1.30637788386308069046861449260260571291600088813122391189640276441774708454824;
constexpr long double VAN_DER_PAUW = 4.53236014182719380962464816403298615670371321428914737035216097427458058288387;
constexpr long double MAGIC_ANGLE = 0.9553166181245092781638571035164695441851610138051091579242473647425820003316;
constexpr long double ARTIN = 0.3739558136192022880547280543467787529688589794522003538578275469485086476576;
constexpr long double PORTER = 1.4670780794339754725144312944478256187066911943249963622603401069773360245892;
constexpr long double LOCH = 0.97027011439203412398568770562056390975217497122528294440203328259477999364007;
constexpr long double LIEB_SQUARE_ICE = 1.53960071783900203869116290848416925169585846423015464368405145489124006889791;
constexpr long double NIVEN = 1.705211140105367764288551453434508160251926070972775240073524770095186;
constexpr long double STEPHENS = 0.57595996889294543964307812563699392467666034904869699589724609339381373485312;
constexpr long double FIBONACCI = 3.35988566624317755317201130291892717968890513373134770895319593368153635070351;
constexpr long double FEIGENBAUM = 4.66920160910299067185320382046620161725818557747576863274565134300419835087562;
constexpr long double FRANSEN_ROBINSON = 2.80777024202851936522150118655777293215058679682175922375362850306323947053349;
constexpr long double SECOND_BOIS_REYMOND = 0.19452804946532472767685206855592455149340968548690145992189346165084709384827;
constexpr long double ERDOS_TENENBAUM_FORD = 0.08607133205537660370995805692454069873433056393303413004001372698153430050810;
constexpr long double CONWAY = 1.30357726903429639125709911215255189073070250465949866673717525420209103463744;
constexpr long double HAFNER_SARNAK_MCCURLEY = 0.35323637185499598454351655043227042460681291349805615517366520134729942415351;
constexpr long double BACKHOUSE = 1.45607494858268967139959535111654355719420838698859375124847516215858832766028;
constexpr long double VISWANATH = 1.13198824879438667943671135804518217379619260986450704546465211061918780889928;
constexpr long double KOMORNIK_LORETI = 1.78723165018296593301323366908279349340219890138524283860920205233127958201899;
constexpr long double EMBREE_TREFETHEN = 0.70258179182796851527715032322249880240712122201928768373939113171370109190065;
constexpr long double HEATH_BROWN_MOROZ = 0.00131764115485317810635131126268388224116769431169834711234773313301367931961;
constexpr long double MRB_CONSTANT = 0.18785964246203248736006562705421630608398963981750520427001972505731525014113;
constexpr long double SOMOS = 1.66168794963359412129575891396384509276854617400232718363095683501252750026024;
constexpr long double FOIAS = 1.18745235112650105459658087714849634703163083719055853698632955355425705767185;

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
    x = fmod(x, 2 * PI); // Reduce x to the range of [-2pi, 2pi]
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
    float number = x;
    int exponent = 0;
    for (; number > 1; number /= 10) {
        exponent++;
    }
    number *= 10;
    exponent -= 1;
    double y = (number - 1) / (number + 1);
    int terms = 999;
    float result = 0;
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
    return (returnType)(ln<float>(argument) / ln<float>(base));
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
    float xk = a/2.0; //init. guess
    double te1 = ((double)(n-1)/n);
    double te2 = (double) a/n;
    for (int i = 0; i < 99; i++) {
        xk = (te1*xk) + (te2 * (1 / pow(xk, (int) (n - 1))));
    }
    return (returnType) xk;    
}

template <typename returnType, typename T1 = returnType>
returnType exp(T1 x){
    float result = 0.0;
    for(int i = 0;i<21;i++){
        result += pow((double) x, (int) i) / factorialL(i);
    }
    return (returnType) result;
}

template <typename returnType = double, typename T1 = returnType>
returnType tan(T1 x){
    x = fmod(x, PI); //reduce x to the range of [-pi, pi]
    //adjust x to range of [-pi/2, pi/2]
    if(x < -PI / 2){
        x += PI;
    }
    else if(x > PI/2){
        x -= PI;
    }
    return (returnType) (sin<double>(x)/cos<double>(x));
}

template <typename returnType = double, typename T1 = returnType>
returnType arcsin(T1 x){
    if(x < -1 || x > 1){
        throw std::runtime_error("Error: arcsin is undefined for values outside the domain range [-1, 1].");
    }
    float result = 0;
    for(int i = 0;i<11;i++){
        int t3 = (2*i) + 1;
        result += (factorialL(2*i))/(pow((int) 4, (int) i) * (factorialL(i)*factorialL(i)) * (t3))*pow((double) x, (int) t3);
    }
    return (returnType) result;
}

template <typename returnType = double, typename T1 = returnType>
returnType arccos(T1 x){
    if(x < -1 || x > 1){
        throw std::runtime_error("Error: arccos is undefined for values outside the domain range [-1, 1].");
    }
    return (returnType) ((PI/2) - arcsin<float>(x));
}

template <typename returnType = double, typename T1 = returnType>
returnType arctan(T1 x){
    float result = 0;
    for(int i = 0;i<20;i++){
        int t2 = (2*i) + 1;
        result += ((pow(-1, i))/t2)*pow(x, t2);
    }
    return (returnType) result;
}

template <typename returnType = double, typename T1 = returnType>
returnType sinh(T1 x){
    float result = 0;
    for(int i = 0;i<20;i++){
        int t = (2*i) + 1;
        result += ((pow(x, t))/factorialL(t));
    }
    return (returnType) result;
}

template <typename returnType = double, typename T1 = returnType>
returnType cosh(T1 x){
    float result = 0;
    for(int i = 0;i<20;i++){
        int t = 2*i;
        result += ((pow(x, t))/factorialL(t));
    }
    return (returnType) result;    
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

template<typename T>
void bubbleSort(std::vector<T>& arr, bool isAscending){
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size()-i-1;j++){
            if(((arr[j] < arr[j+1]) && !isAscending) || ((arr[j] > arr[j+1]) && isAscending)){
                T tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

template<typename T>
void insertionSort(std::vector<T>& arr, bool isAscending){
    for(int i = 1;i<arr.size();i++){
        T k = arr[i];
        int j = i;
        while ((j > 0 && arr[j-1] > k) && isAscending || (j > 0 && arr[j-1] < k) && !isAscending){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = k;
    }
}

template<typename T>
void selectionSort(std::vector<T>& arr, bool isAscending){
    for(int i = 0;i<arr.size()-1;i++){
        int m = i;
        for(int j = i + 1;j<arr.size();j++){
            if((arr[j] <= arr[m] && isAscending) || (arr[j] >= arr[m] && !isAscending)){
                m = j;
            }
        }
        T tmp = arr[i];
        arr[i] = arr[m];
        arr[m] = tmp;
    }
}

#endif