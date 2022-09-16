#include <iostream>

using namespace std;

struct book
{
    string title;
    string author;
    int price;
};


int main(){
    book web_book = {"HTML과 CSS", "홍길동", 28000};
    cout << "제목: " << web_book.title << endl;
    cout << "지은이: " << web_book.author << endl;
    cout << "가격: " << web_book.price << endl;


    book *web_ptr = &web_book;
    cout << "제목: " << web_ptr->title << endl;
    cout << "지은이: " << web_ptr -> author << endl;
    cout << "가격: " << web_ptr -> price << endl;

    return 0;
}