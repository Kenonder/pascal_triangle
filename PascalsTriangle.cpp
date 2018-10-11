//============================================================================
// Name        : PascalsTriangle.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int pascal_triangle( int n );
int pascal_triangle_recursive( int n );
int recursion( int row,int col );

#ifndef MARMOSET_TESTING
int main();
#endif


#ifndef MARMOSET_TESTING
int main(){
    std::cout<<pascal_triangle(14)<<std::endl;
    std::cout<< pascal_triangle_recursive(14)<<std::endl;
	return 0;
}
#endif

int pascal_triangle( int n ){
	int sum=0;
	int element;
	for (int row=0; row < n + 1; row++)
	    {
	        for (int col=0; col <= row; col++)
	        {
	        	if (col == 0 || row == 0){
	        		element = 1;
	        	}
	           	else{
	            element = element * (row - col + 1) / col;
	           	}
	        	std::cout<<element<<" ";
	            sum++;
	        }
	        std::cout << std::endl;
	    }
        return sum;
}

int pascal_triangle_recursive( int n ){
	int sum=0;
	for(int row=0;row < n + 1;++row){
		for(int col=0;col <= row;++col ){
		std::cout<<recursion(row,col)<<" ";
		sum++;
		}
		std::cout<<std::endl;
	}
	return sum;
}

int recursion(int row,int col){
	if(col == 0 || col == row){
		return 1;
	}
	else{
		return recursion(row-1,col-1)+recursion(row-1,col);
	}
}





















