//============================================================================
// Name        : PascalsTriangle.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

int pascal_triangle( int n );
int pascal_triangle_recursive( int n );
int recursion( int row,int col );

#ifndef MARMOSET_TESTING
int main(){
	int row{0};
	std::cout<<"Input the number of rows:";
	std::cin>>row;
	int n = pascal_triangle(row);
	std::cout<<"The number of integers in the triangle is "<<n<<std::endl<<std::endl;
	std::cout<<"Input the number of rows:";
    std::cin>>row;
	n = pascal_triangle_recursive(row);
	std::cout<<"The number of integers in the triangle is "<<n<<std::endl;
	return 0;
}
#endif

int pascal_triangle( int n ){
	for (int row{0}; row < n; row++)
	    {
	        int element{1};

	        for (int col{0}; col <= row; col++)
	        {
	            std::cout<<element<<" ";
	            element = element * (row - col) / (col + 1);
	        }
	        std::cout << std::endl << std::endl;
	    }
        return (1+n) * n / 2;
}

int pascal_triangle_recursive( int n ){
	for(int row{0};row < n;++row){
		for(int col{0};col <= row;++col ){
		std::cout<<recursion(row,col)<<" ";
		}
		std::cout<<std::endl<< std::endl;
	}
	return (1+n) * n / 2;
}

int recursion(int row,int col){
	if(col == 0 || col == row){
		return 1;
	}
	else{
		return recursion(row-1,col-1)+recursion(row-1,col);
	}
}





















