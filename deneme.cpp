#include <iostream>
#include <vector>

using namespace std;


class Rectangle{

  public:
    Rectangle(int x, int y){
      x_ = x;
      y_ = y;
      cout << "class is created" << endl;
    }

    int Area(int x, int y){
      return area_ = x*y;
    }
    int get_x(){return x_;}
    int get_area(){return area_;}


  private:
    int x_{0}, y_{0}, area_{0};

};

int main() {
  std::cout << "Hello World!\n";

  vector<int> x{1,4,5};
  vector<int> y{2,8,10};

  vector<Rectangle> rec_vec{};
  for(int i = 0; i < x.size(); i++){
    rec_vec.push_back(Rectangle(x[i], y[i]));
  }

  for(int i = 0; i < x.size(); i++){
    rec_vec[i](Rectangle(x[i], y[i]));
    cout << rec_vec[i].get_x() << endl;
  }

  for(int i = 0; i < x.size(); i++){
    cout << rec_vec[i].get_area() << endl;
  }

  cout << "----------------------" << endl;

  for(int i = 0; i < x.size(); i++){
    rec_vec[i].Area(x[i], y[i]);
  }

  for(int i = 0; i < x.size(); i++){
    cout << rec_vec[i].get_x() << endl;
  }

  for(int i = 0; i < x.size(); i++){
    cout << rec_vec[i].get_area() << endl;
  }

  


}