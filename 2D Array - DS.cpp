#include <iostream>
using namespace std;
int main()
{
	int hourglassSum(vector<vector<int>> arr)	{
		int highest_hourglass = 0;
		for (int i = 1; i < 5; i++){
			for (int j = 1; j < 5; j++){
				int sum = arr[i - 1][j - 1] +
						  arr[i - 1][j] +
						  arr[i - 1][j + 1] +
						  arr[i][j] +
						  arr[i + 1][j - 1] +
						  arr[i + 1][j] +
						  arr[i + 1][j + 1];
				if (i == 1 && j == 1){
					highest_hourglass = sum;
				}
				if (sum > highest_hourglass){
					highest_hourglass = sum;
				}
			}
		}
		return highest_hourglass;
	}
}