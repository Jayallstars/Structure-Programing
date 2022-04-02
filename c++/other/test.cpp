#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
public:
	Vector(int sx, int sy, int ex, int ey) {
		start_x_ = sx;
		start_y_ = sy;
		end_x_ = ex;
		end_y_ = ey;
	}
    void Offset(int d){
        start_x_ += d;
		start_y_ += d;
		end_x_ += d;
		end_y_ += d;
    }
	void Offset(int a, int b){
		start_x_ += a;
		start_y_ += b;
		end_x_ += a;
		end_y_ += b;
	}
	double Length() const {
		double x_2 = pow((end_x_ - start_x_), 2);
		double y_2 = pow((end_y_ - start_y_), 2);
		double length = sqrt(x_2 + y_2);
		return length;
	}
	string ToString() const {
		string s = "(" + to_string(start_x_) + "," + to_string(start_y_)
					+ ") -----> ("
					+ to_string(end_x_) + "," + to_string(end_y_) + ")";
		return s;
	}

private:
	int start_x_, start_y_;
	int end_x_, end_y_;
};

int main(){
	Vector v1(0,0,3,4), v2(1,1,2,2);
	cout << v1.Length() << endl;
	cout << v2.Length() << endl;

	v1.Offset(5);
    cout << v1.ToString() << endl;
    v1.Offset(5,5);
    cout << v1.ToString() << endl;
}