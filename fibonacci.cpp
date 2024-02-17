#include <iostream>
int end;
unsigned long long a[] = {1,1};
int main(){
    int length;
    std::cin>>length;
    if(length<=0) {length=abs(length);}
    for(int i;i<=length;i++){
        if(i<1) {} else { a[i]=a[i-1]+a[i-2]; }
    std::cout<<a[i]<<"\n";}
    std::cin >> end;
}