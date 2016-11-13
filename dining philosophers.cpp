#include <iostream>
#include <vector>

using namespace std;

class Philosopher{
public:
    bool isHungry;
    bool hasLeftFork;
    bool hasRightFork;

    Philosopher(){
        isHungry = false;
        hasLeftFork = false;
        hasRightFork = false;
    }

    Philosopher(bool isHungry, bool hasLeftFork, bool hasRightFork){
        this->isHungry = isHungry;
        this->hasLeftFork = hasLeftFork;
        this->hasRightFork = hasRightFork;
    }
};

class Table{
public:
    bool state;
    vector<Philosopher> philosopher_list;

};

int main(){
    int philosopher_count;
    int hungry_count, tmp = 0;
    vector <Philosopher> ph_list;

    cout<<"\nDining Philosophers\n";
    cout<<"Number of philosophers <min of 5>: ";
    cin>>philosopher_count;
    while(philosopher_count < 5){
        cout<<"Number of philosophers <min of 5>: ";
        cin>>philosopher_count;
    }

    for(int i = 0; i < philosopher_count; i++){
        Philosopher p;
        ph_list.push_back(p);
    }

    cout<<"Number of hungry philosophers <max of 5>: ";
    cin>>hungry_count;
    while(philosopher_count < 5){
        cout<<"Number of hungry philosophers <max of 5>: ";
        cin>>hungry_count;
    }

    int hungry_philo[hungry_count];
    for(int i = 0; i < hungry_count; i++){
        cout<<"Positions of hungry philosopher "<<i+1<<": ";
        cin>>hungry_philo[i];
    }

    for(int i = 0, j; i < hungry_count; i++){
        j = hungry_philo[i];
        ph_list.at(j).isHungry = true;
    }

return 0;
}


