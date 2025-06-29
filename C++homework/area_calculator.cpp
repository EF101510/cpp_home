#include<iostream>
using namespace std;

void rectangle_area();
void triangle_Area();
void circle_Area();
void exit_area();

int main(int argc, char** argv)
{
    int selection;  
    cout << " 1=計算長方形面積 2=計算三角形面積 3=計算圓面積" << endl;
    cin >> selection;
    if (selection == 1)
    {
        rectangle_area();
    }
    else if (selection == 2)
    {
        triangle_Area();
    }

    else if (selection == 3)
    {
        circle_Area();
    }

    else if (selection != 1 || 2 || 3)
    {
        exit_area();
    }
    
    
}

void rectangle_area()
{
    int length;
    int width;
    cout << "請輸入長方形的長和寬: ";
    cin >> length;
    cin >> width;
    double area = length * width;
    cout << "長方形的面積是: " << area << endl;
}

void triangle_Area()
{
    int base;
    int height;
    cout << "請輸入三角形的底和高: ";
    cin >> base;
    cin >> height;
    double area =  base * height / 2;
    cout << "三角形的面積是: " << area << endl;
}

void circle_Area() 
{
    int radius;
    cout << "請輸入圓的半徑: ";
    cin >> radius;
    double area = 3.14159 * radius * radius; 
    cout << "圓的面積是: " << area << endl;
}

void exit_area()
{
    cout << "抱歉，你的行為我們無法為您服務^____^" << endl;
    return;
}