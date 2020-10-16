#include <iostream>
#include <vector>
#include <memory>


using namespace std;

class Test {
    private:
        int data;
    public:
        Test(): data{0} {
             cout << "\ttest constructor (" << data << ")" << endl; 
        }
        Test(int data) : data {data} {
            cout << "\tTest constructor (" << data << ")" << endl;
        }
        int get_data() const {return data;}
        ~Test() {cout << "\tTest destructor (" << data << ")" << endl;}
};

// Function prototypes
auto make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

// function implementations
auto make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num) {
    int tmp {};
    cout << "Filling vector..." << endl;
    for (int i{0}; i < num; ++i) {
        cout << "Enter an integer: ";
        cin >> tmp;
        vec.push_back(make_shared<Test>(tmp));
        cout << endl;
    }
    cout << endl;
}

void display(const vector<shared_ptr<Test>> &vec) {
    cout << "Displaying vector..." << endl;
    for (const auto &t_ptr: vec)
        cout << t_ptr->get_data() << endl;
    cout << endl;
}

int main() {
    // create vec pointer on the stack
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    // allocate heap memory: return unique ptr to vector of shared ptrs to Test
    vec_ptr = make();

    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    // pass vector of shared pointers to tests to fill
    // fill pushes back num times, asking each time for an integer for test.data
    // put shared ptr to test on vec
    fill(*vec_ptr, num);
    // iterate through vector of shared pointers and display test data
    display(*vec_ptr);
    return 0;
}