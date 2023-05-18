//Afham Bashir 
#include <iostream>
using namespace std;
 
void output (int stars);   //recursive function for each row
void patterns (int &stars);  //recruvsive function for pattern of rows

 
int main () {
  int stars;            //creates varialbe for desired stars
  cout << "Enter number of stars: " <<endl; //output to user
  cin >> stars;              //inputs stars desired. 
  patterns(stars);           //calls recursive function
  return 0;
}

void patterns(int &stars){   //function takes reference varaible. 
  int check= stars;          //creates a temporary varaible. 
  if (stars ==1) {         
    cout <<"* \n" <<endl;    //base case of the recurion. 
    return; } 
  if(stars){                
    output(stars);        //calls output of stars for each row
    stars--;              //decrements the star varaible after each row
    patterns(stars);}     //calls itself again for next row. 
    else {stars++;}       //once at one middle, begins increamenting stars
  if(stars<check){        //if the varaible is less than the temporary
   stars++;               //increants the stars. 
   output(check);         //uses check as parameter for inceasing the number of stars when the pattern is going back up in stars toward the final row. 
 }
}

void output (int stars){      //recruvsive function prints each row
  if (stars == 0 ){           //base case 
    cout << "\n" << endl;     //when all stars are printer, goes to newline. 
    return ;} 
 cout <<"*";                 //general case is to print *, and then 
 return output(stars-1);     //calls itself recursively for n-1 stars. 
}