#include<iostream>
using namespace std;

//Pattern 1
void nForest(int n) { 

	for(int i=0 ; i<n ;i++){
		for(int j=0 ; j<n ; j++){
			cout<<'*'<<' ';
		}
		cout<<'\n';
	}
}
//Pattern 2
void nBy2Forest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<'*'<<' ';
		}
		cout<<'\n';
	}
}
//Pattern 3
void nTriangle(int n) {
	for(int i=1 ;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<j<<' ';
		}
		cout<<endl;
	}
}
//Pattern 4
void ncrossntriangle(int n) {
	
	for(int i=1; i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<i<<' ';
		}
		cout<<endl;
	}
}
//Pattern 5
void seeding(int n) {

	for(int i=0;i<n ; i++){
		for(int j=0; j<n-i ;j++){
			cout<<'*'<<' ';
		}
		cout<<endl;
	}
}
//Pattern 6
void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=0 ;i<n ; i++){
        for(int j=1; j<=n-i;j++){
            cout<<j<<' ';
        }
         cout<<'\n';
    }
}
//Pattern 7
void nStarTriangle(int n) {
    
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-1-i;j++){
            cout<<' ';
        }

        //star
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        cout<<'\n';
    }
    
}
//Pattern 8
void reverseStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<' ';
        }

        //stars
        int stars =(2*n-1)-(2*i);
        for(int j=0;j<stars;j++){
            cout<<'*';
        }

        cout<<'\n';
    }
}
//Pattern 9
void nStarDiamond(int n) {
    
    int space=n;
    int stars;
    
    for(int i=0; i<2*n;i++){
        //logic
        if (i < n) {
            space--;
            stars=2*i+1;
        } else if (i > n){
            space++;
            stars-=2;
        }

        //printing spaces
        for (int j = 0; j < space; j++) {
            cout << ' ';
            }

        for(int j=0 ; j<stars; j++){
            cout<<'*';
        }
            
        cout<<'\n';
    }

}
//Pattern 10
void rotatedStarTriangle(int n) {

    int stars=0;
    for(int i=0;i<2*n-1;i++){
        if(i<n)stars++;
        else stars--;
        for(int j=0;j<stars;j++){
            cout<<'*';
        }
        cout<<'\n';
    }
}
//Pattern 11
void nBinaryTriangle(int n) {
  
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
           cout<<(i+j)%2<<' '; 
        }
        cout<<'\n';
    }
}
//Pattern 12
void numberCrown(int n) {
   
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<' ';
        }
        //space
        for(int j=n-1;j>0;j--){
            cout<<"    ";
        }

        //numbers
        for(int j=i;j>=1;j--){
            cout<<j<<' ';
        }
        cout<<'\n';
    }
}
//Pattern 13
void increasingNumberTriangle(int n) {
  
    int num =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<' ';
            num++;
        }
        cout<<'\n';
    }
}
//Pattern 14
void increasingLetterTriangle(int n) {
 
    
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch<<' ';
            ch++;
        }
        cout<<'\n';
    }
}
//Pattern 15
void reverseLetterTriangle(int n) {
 
    char ch;
    for(int i=0; i<n ; i++){
        ch = 'A';
        for(int j=1 ; j<=n-i ; j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
}
//Pattern 16
void alphaRamp(int n) {

    char ch='A';
    for(int i=0; i<n ; i++){
        for(int j=0;j<=i ; j++){
            cout<<ch<<' ';
        }
        ch++;
        cout<<endl;
    }
}
//Pattern 17
void alphaHill(int n){
    char ch;
    int alpha;
    for(int i=0 ; i<n; i++){
        //space
        for(int j=0 ; j<n-i-1 ; j++){
            cout<<"  ";
        }

        //alphabets
        ch='A';
        alpha = 2*i+1;

        for(int j=0 ; j<alpha ; j++){
            cout<<ch<<' ';

            if(j<alpha/2){
                ch++;
            }
            else {
                ch--;
            }
        }

        //space
        for(int j=0 ; j<n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
//Pattern 18
void alphaTriangle(int n){
    for(int i=0 ; i<n ; i++){
        for(char ch='A'+n-1-i; ch<='A'+n-1 ; ch++){
            cout<<ch<<' ';
        }
        cout<<endl;
    }
}
//Pattern 18
void reverseAlphaTriangle(int n){

    char ch;

    for(int i=0; i<n;i++){
        ch='A'+n-1;
        for(ch='A'+n-1; ch>'A'+n-2-i;ch--){
            cout<<ch<<' ';
        }
        cout<<endl;
    }
}
//Pattern 19
void symmetricVoidEnclosed(int n){
    int space;
    int stars;
    for(int i=0 ; i<2*n ; i++){

        if(i<n){
            space=i;
            stars=n-i;
        }
        else if(i>n) {
            space-=1;
            stars+=1;
        }

        //stars
        for(int j=0;j<stars;j++){
            cout<<'*'<<' ';
        }

        //space

        for(int j=0; j<4*space ; j++){
            cout<<' ';
        }

        //stars
        for(int j=0;j<stars;j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
}
//Pattern 20
void symmetricVoidOpen(int n){

    int stars,spaces;
    for(int i=0; i<2*n-1 ; i++){
        if(i<n){
            stars=i;
            spaces=2*(n-1-i);
        }
        else{
            stars-=1;
            spaces+=2;
        }
        
        //stars
        for(int j=0 ; j<=stars ;j++){
            cout<<'*'<<' ';
        }

        //space
        for(int j=0 ; j<spaces ; j++){
            cout<<"  ";
        }

        //stars
        for(int j=0 ; j<=stars ;j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    }
//Pattern 21
void getStarPattern(int n){
    for(int i=0;i<n;i++){
    for(int j=0; j<n ; j++){
        if(i==0||i==n-1||j==0||j==n-1)cout<<'*';
        else cout<<' ';
    }
    cout<<'\n';
    }
}
//Pattern 22
void getNumberPattern(int n){
    int num = n;
    for(int i=0 ; i<2*n-1 ; i++){
        for(int j=0 ; j<2*n-1 ; j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int down =(2*n-2) - i;
            int horz_min = right<=j ? right : j ;
            int vert_min = i<=down ? i : down ;
            
            cout<<n- (horz_min < vert_min ? horz_min : vert_min);
        }
        cout<<'\n';
    }
}

int main (){
    int n;
    cin>>n;
    
    nForest(n);     
    cout<<'\n';
    
    nBy2Forest(n);  
    cout<<'\n';
    
    nTriangle(n);   
    cout<<'\n';
    
    ncrossntriangle(n); 
    cout<<'\n';
    
    seeding(n); 
    cout<<'\n';
    
    nNumberTriangle(n); 
    cout<<'\n';
    
    nStarTriangle(n);   
    cout<<'\n';
    
    reverseStarTriangle(n); 
    cout<<'\n';
    
    nStarDiamond(n);    
    cout<<'\n';
    
    rotatedStarTriangle(n); 
    cout<<'\n';
    
    nBinaryTriangle(n); 
    cout<<'\n';
    
    nBinaryTriangle(n); 
    cout<<'\n';
    
    increasingNumberTriangle(n);    
    cout<<'\n';
    
    increasingLetterTriangle(n);    
    cout<<'\n';
    
    reverseLetterTriangle(n);   
    cout<<'\n';
    
    alphaRamp(n);   
    cout<<'\n';
    
    alphaHill(n);   
    cout<<'\n';
    
    alphaTriangle(n);   
    cout<<'\n';
    
    reverseAlphaTriangle(n);    
    cout<<'\n';
    
    symmetricVoidEnclosed(n);   
    cout<<'\n';
    
    symmetricVoidOpen(n);   
    cout<<'\n';
    
    getStarPattern(n);  
    cout<<'\n';
    
    getNumberPattern(n);    
    cout<<'\n';


}
