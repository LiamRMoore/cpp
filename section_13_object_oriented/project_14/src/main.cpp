#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move {
    private:
        int *data;
    public:
        void set_data_value(int d) { *data = d;}
        int get_data_value() { return *data; }
        // constructor
        Move(int d);
        // copy constructor
        Move(const Move &source);
        // move constructor
        Move(Move &&source) noexcept;
        // destructor
        ~Move();
};

// constructor bodies
// main constructor
Move::Move(int d) {
    cout << "regular constructor - assign data: " << d << endl;
    data = new int;
    *data = d;
}

// copy constructor delegates to regular constructor which allocates via new
Move::Move(const Move &source) : Move{*source.data} {
    cout << "Copy constructor - deep copy!" << endl;
}

//move constructor
Move::Move(Move &&source) noexcept 
    : data{source.data} {
        cout << "Move constructor moving resource " << *source.data << endl;
        source.data = nullptr;
}

// destructor
Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for " << *data << endl;
    }
    else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

void display_deep(Move s) {
    cout << s.get_data_value() << endl;
}

int main() {
    // when vector grows, it copies objects behind the scenes!
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    return 0;
}