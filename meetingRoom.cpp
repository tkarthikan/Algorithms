#include <iostream>
#include <vector>

class Interval {
 public:
      int start, end;
      Interval(int start, int end) {
          this->start = start;
          this->end = end;
      }
};

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: if a person could attend all meetings
     */
    bool canAttendMeetings(std::vector<Interval *> intervals) {
        // Write your code here
        std::cout<<"Size: "<<intervals.size()<<std::endl;
        int j=0;
        for (int i=0; i<(intervals.size()-1); i++)
        {   
                std::cout<<intervals[i]->end<<std::endl;
                j = i + 1;
                if (intervals[i]->end > intervals[j]->start )
                {
                    return false;
                }
        }
        return true;
    }
};

int main()
{
	Solution sol;

    Interval *m1 = new Interval(0,30);
    Interval *m2 = new Interval(5,10);
    Interval *m3 = new Interval(15,20);
    std::vector<Interval*> v1;
    v1.push_back(m1);
    v1.push_back(m2);
    v1.push_back(m3);
    bool vout = sol.canAttendMeetings(v1);
	std::cout << "Valid? "<<vout<<std::endl;

    delete m1;
    delete m2;
    delete m3;

    m1 = new Interval(5,8);
    m2 = new Interval(9,15);
    std::vector<Interval*> v2;
    v2.push_back(m1);
    v2.push_back(m2);
    vout = sol.canAttendMeetings(v2);
	std::cout << "Valid? "<<vout<<std::endl;
	delete m1;
    delete m2;

	return 0;
}