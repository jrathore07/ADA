#include <iostream>
using namespace std;
int binary_search(int A[], int key, int imin, int imax){
    if(imax<imin){
        cout<<"array is empty";
    }
    else if(key<A[imin]||key>A[imax]){
        return -1;
    }
    else{
       int imid=(imin+imax)/2;
        if(A[imid]<key){
            return binary_search(A,key,imin,imid-1);
        }
        else if(A[imid]<key){
            return binary_search(A,key,imid+1,imax);
        }
        else{
            return imid;
        }
    }
}
int main()
{
    int n,a[5];
    cout<<"jaydeep rathore\0827CI221071";
    cout<<"enter the element of array";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"enter any number";
    cin>>n;
     int r =binary_search(a,n,0,4);
     if(r!=-1){
         
    cout<< "element is present on "<<r;
     }
     else{
         
   cout<<"elemnet is not in array";
     }

    return 0;
}