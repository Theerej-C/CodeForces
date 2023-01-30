#include <iostream>

using namespace std;

/*
 * One day three best friends Petya, Vasya and Tonya decided to form a team and
 * take part in programming contests. Participants are usually offered several
 * problems during programming contests. Long before the start the friends
 * decided that they will implement a problem if at least two of them are sure
 * about the solution. Otherwise, the friends won't write the problem's
 * solution.
 *
 * This contest offers n problems to the participants. For each problem we know,
 * which friend is sure about the solution. Help the friends find the number of
 * problems for which they will write a solution.
 *
 *
 */
int main()
{
    int N;

    cin >> N;
    int ar[N][3];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ar[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int count1 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (ar[i][j] == 1)
            {
                count1++;
            }
        }
        if (count1 > 1)
        {
            count++;
        }
    }
    cout << count;
}