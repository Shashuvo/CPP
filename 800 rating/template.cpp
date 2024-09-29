int l=0,r=n-1;
while(l<=r){
    int m=(l+r)/2;
    if(a[m]==x){
        found=1;
        break;
    }
    else if(x<a[m]){
        r=m-1;
    }
    else{
        l=m+1;
    }
}//binary search 1st template

int l=-1,r=n;
while(l+1<r){
    int m=(l+r)/2;
    if(a[m]<=x){
        r=m;
    }
    else{
        l=m;
    }
}//lower bound

int l=-1,r=n;
while(l+1<r){
    int m=(l+r)/2;
    if(a[m]<x){
        r=m;
    }
    else{
        l=m;
    }
}//upper bound