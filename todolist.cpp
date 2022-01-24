/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<string>&v){
    int idx = 1;
    for(int i = 0; i < v.size(); i++){
        cout << idx << ": "  << v[i] << endl;
        idx++;
    }
    return;
}

void commands(){
    cout << "Type Add => if you want to add the task"<< endl;
    cout << "Type Delete => if you want to delete the task"<< endl;
    cout << "Type Update => if you want to update the task"<< endl;
    cout << "Type Exit => if you want to stop."<< endl;
    cout << "Type Commands => if you want to see Commands."<< endl;
    cout << "Type Tasks => if you want to see all the tasks."<< endl;
    cout << endl;
    return;
}

int main(){
    cout << "TODO List" << endl;
    string stop = "";
    commands();
    vector<string>v;
    while(stop != "Exit") {
    string command, task;
    
    cin >> command;
    if(command == "Add"){
        cout << "Please type the Task: ";
        cin >> task;
        v.push_back(task);
        cout << "Successfully Added!" << endl;
        print(v);
    }
    
    else if(command == "Delete"){
        print(v);
        cout << "Please write the Task no. which you want to delete: ";
        int task_no;
        cin >> task_no;
        v.erase(v.begin() + (task_no-1));
        cout << "Successfully Deleted! "<< "Task no. "<<task_no << endl;
    }
    
    else if(command == "Update"){
        print(v);
        cout << "Please write the Task no. which you want to update: ";
        int task_no;
        cin >> task_no;
        cout << "already added task is this -> " << v[task_no-1] << endl;
        cout << "Please write the updated task: "<<endl;
        cin >> task;
        v[task_no-1] = task;
        cout << "Successfully Updated! "<<"Task no. " <<task_no << endl;
    }
    else if (command == "Commands"){
        commands();
    }
    else if(command == "Tasks"){
        print(v);
    }
    else if(command == "Exit"){
        break;
    }
    else {
        cout << "No such command present, Please Type <Commands> to see all the available commands";
    }
}
    return 0;
    
}
