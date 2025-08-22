#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ROWS :"<<endl;
    cin>>n;

    int o;
    cout<<"Choose a pattern: 1 → Full Square, 2 → Right Triangle, 3 → Number Triangle : " ;
    cin>>o;

    if(o==1){
        cout<<"YOU CHOSE FULL SQUARE OF STARS "<<endl;
    }else if(o==2){
        cout<<"YOU CHOSE RIGHT TRIANGLE "<<endl;
    }else if(o==3){
        cout<<"YOU CHOSE NUMBER TRIANGLE "<<endl;
    }else{
        cout<<"THE NUMBER YOU HAVE CHOSEN IS NOT AVAILABLE "<<endl;
    }
    return 0;
}
    
    
    
    
    
    
    
    