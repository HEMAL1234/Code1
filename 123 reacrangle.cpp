 problem name:reactangle area

//#include<iostream>
//using namespace std;

//main(){
class Rectangle {
    public:
    int width, height;
    Rectangle(){}
     void display() {
        cout << width << " " << height << "\n";
    }
};

class RectangleArea : public Rectangle {
    public:
    RectangleArea(){}
    void read_input() {
        cin >> width;
        cin >> height;
    }
     void display() {
        cout << width * height << "\n";
    }
};

