#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    int total_faces=0;
    for(int i=0;i<n;i++){
       cin>> str[i];
       if(str[i]== "Tetrahedron"){
        total_faces=total_faces+4;
       } else if(str[i] == "Cube") {
        total_faces += 6;
       }
       else if (str[i] == "Octahedron"){
        total_faces += 8;
       
       }else if (str[i] == "Dodecahedron") {
        total_faces += 12;
       }
       else if (str[i] == "Icosahedron"){
        total_faces += 20;
       }
   }
   cout<<total_faces;

    }
