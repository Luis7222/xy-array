//creates and prints multidimensional array


#include <iostream>
#include <iomanip>
using namespace std;



// Declare constant DIM = 7
const int DIM =7;


// Inserte prototypes here
void createBoard(char grid[DIM][DIM],int num);
void printBoard1(char grid[DIM][DIM],int num);
void printBoard2(char grid[DIM][DIM],int num);




int main()
{
	// Declare a two-dimensional array (using the constant) to hold single characters
char allboard [DIM][DIM];
	// Declare variable bsize to hold a whole number
int bsize;
	// Declare variable answer to hold a character
char ans;
	// Use a do-loop to allow the user to try again
do{
		// Prompt the user "Please enter the size of the board [1-7]: "
cout <<"Please enter the size of the board [1-7]: ";
		// Get the size and store it in bsize
cin >>bsize;
		// Check the input stream. If it is invalid, display error message "Invalid entry" and jump out of the loop

if (!cin )
{
  cout <<"invalid entry";
cin.clear();
cin.ignore(2000, '\n');
break;
}
		// Check if bsize is within the range. If it is, call the functions
if(bsize >=1 and bsize <=7)
{
			// Call the function to create the checkerboard
createBoard(allboard, bsize);
			// Call the function to print the checkerboard
printBoard1(allboard, bsize);

			// Call the function to print the rotated checkerboard
printBoard2(allboard, bsize);
}
		// Otherwise, display error message "Invalid size"
else cout<< "invalid size"<<endl;


		// Prompt the user "Do you want to try again [y-n]?: "
cout<< "Do you want to try again [y-n]?: ";
		// Get the answer and store in answer
cin>> ans;
}
		// As long as the answer is 'y' (in upper or lower case), keep looping
while(ans=='y' or ans=='Y');

	
	return 0;
}


// Function definitions

// createBoard(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops creates the board according to specifications: starting with 'A' inserts
// the letters in the array separated by a blank box
void createBoard(char board[][DIM],int size){
char a=65;
for(int row=0;row<size;row++)
{
  for(int col=0;col<size;col++){
    if(row%2==1)
    {
      if(col%2==1)
      {
        board[row][col]=a;
        a++;
      }
      else{
        board[row][col]=' ';
      }
    }
    else {
      if(col%2==0){
        board[row][col]=a;
        a++;
      }
      else{
        board[row][col]=' ';
      }
    }
  }
}
}






// printBoard1(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops prints the board
void printBoard1(char board[][DIM],int size){
for(int row =0;row<size;row++)
{
  for (int col=0;col<size;col++)
  {
    cout<<board[row][col];
  }
  cout <<endl;
}
cout<<endl;
}




// printBoard2(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops prints the board rotated
void printBoard2(char board[][DIM],int size){
  for(int row =0;row<size;row++)
{
  for (int col=0;col<size;col++)
  {
    cout<<board[col][row];
  }
  cout <<endl;
}
cout<<endl;
}

