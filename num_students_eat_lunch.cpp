// Solution for 1700. Number of Students Unable to Eat Lunch

#include<vector> 
#include<algorithm>
class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        std::sort(students.begin(), students.end());
        while(!sandwiches.empty()) {
            
            // Get the sandwich at the top of the stack
            // If no one in the student queue can take the sandwich then
            // quit
            // Otherwise remove a student from the queue.

            int sandwich = sandwiches.front();

            if (count(students.begin(), students.end(), sandwich) == 0) {
                break;
            } else {
                if (students.back() == sandwich) {
                    students.pop_back();
                } else {
                    students.erase(students.begin());
                }
                sandwiches.erase(sandwiches.begin());
            }
        }
        return students.size();
    }
};