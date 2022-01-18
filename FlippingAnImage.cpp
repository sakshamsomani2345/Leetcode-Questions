// 832. Flipping an Image
// Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
// To flip an image horizontally means that each row of the image is reversed.
// For example, flipping [1,1,0] horizontally results in [0,1,1].
// To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
// For example, inverting [0,1,1] results in [1,0,0].
// Example 1:
// Input: image = [[1,1,0],[1,0,1],[0,0,0]]
// Output: [[1,0,0],[0,1,0],[1,1,1]]
// Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
// Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
// Example 2:
// Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
// Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
// Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
// Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int n=image.size();
    for (int i = 0; i < n; i++)
    {
        int x=n-1;
        for (int j = 0; j < n/2; j++)
        {
            int temp=image[i][j];
            image[i][j]=image[i][x];
            image[i][x]=temp;
            x--; 
        }
        for (int j = 0; j < n; j++)
        {
            if(image[i][j]==0){
                image[i][j]=1;
            }else{
                image[i][j]=0;
            }
        }
        
        
    }
  return image;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            arr[i].push_back(a);
        }
    }

    vector<vector<int>> image=flipAndInvertImage(arr);
    for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image[0].size(); j++)
        {
           cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}