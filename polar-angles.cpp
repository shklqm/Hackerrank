#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <math.h>

#define PI 3.14159265

using namespace std;


class Point
{
	public:
		int 	x, y;
		float	degree, distance;
		Point(int x, int y, float degree, float distance)
		{
			this->x = x;
			this->y = y;
			this->degree 	= degree;
			this->distance 	= distance;
		}
};

void polarAngels(vector<Point*> points)
{
	int N = points.size();
	
	for(int i=0; i<N-1; i++)
	{
	
		float min = i;
	
		for(int j=i; j<N; j++)
		{
			if(points[j]->degree < points[min]->degree )
				min = j;
			else if(points[j]->degree == points[min]->degree && points[j]->distance < points[min]->distance)
				min = j;
		}
		
		swap(points[i], points[min]);
	}
	
	for(int i=0; i<N; i++)
		cout<<points[i]->x<<" "<<points[i]->y<<endl;
	
}

int main() {

	int N;
	
	cin>>N;
	vector<Point*> allPoints;
	
	for(int i=0; i<N; i++)
	{
		int x, y; 
		cin>> x >>y;
		
		float degree, distance; 	
		degree = atan2(y, x)*180/PI;
		
		if(degree < 0)
			degree += 360;
		
		distance = sqrt(x*x + y*y);
		
		Point* p = new Point(x, y, degree, distance);
		
		allPoints.push_back(p);
	}
	
	polarAngels(allPoints);

    return 0;
}
