#include<iostream>
#include<cmath>

using namespace std;

double x,y,c;

double func(double mid){
    double h1 = sqrt(x*x-mid*mid);
    double h2 = sqrt(y*y-mid*mid);

    return (h1*h2)/(h1+h2);
}

int main(){
    cin>>x>>y>>c;

    double low = 0;
    double high = min(x,y);
    double result = 0;

    while(high-low>0.000001){
        double mid = (low+high)/2.0;
        if(func(mid)>=c){
            result = mid;
            low = mid;
        }else{
            high = mid;
        }
    }
    printf("%.3lf",result);
    return 0;
}