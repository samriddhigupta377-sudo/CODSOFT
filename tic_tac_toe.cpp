#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> tasks;
    int choice;
    string task;

    do
    {
        cout << "\n===== TO-DO LIST =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice)
        {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added successfully!" << endl;
                break;

            case 2:
                if(tasks.empty())
                {
                    cout << "No tasks available." << endl;
                }
                else
                {
                    cout << "\nYour Tasks:" << endl;
                    for(int i = 0; i < tasks.size(); i++)
                    {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                int taskNo;
                if(tasks.empty())
                {
                    cout << "No tasks to delete." << endl;
                }
                else
                {
                    cout << "Enter task number to delete: ";
                    cin >> taskNo;

                    if(taskNo >= 1 && taskNo <= tasks.size())
                    {
                        tasks.erase(tasks.begin() + taskNo - 1);
                        cout << "Task deleted successfully!" << endl;
                    }
                    else
                    {
                        cout << "Invalid task number!" << endl;
                    }
                }
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}                         