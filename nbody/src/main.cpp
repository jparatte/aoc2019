#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

/*
int x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
int x01 = x1 = -1;int y01 = y1 = 0;int z01 = z1 = 2;
int x02 = x2 = 2; int y02 = y2 = -10; int z02 = z2 = -7;
int x03 = x3 = 4; int y03 = y3 = -8; int z03 = z3 = 8;
int x04 = x4 = 3; int y04 = y4 = 5; int z04 = z4 = -1;

int x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
int x01 = x1 = -8;int y01 = y1 = -10;int z01 = z1 = 0;
int x02 = x2 = 5; int y02 = y2 = 5; int z02 = z2 = 10;
int x03 = x3 = 2; int y03 = y3 = -7; int z03 = z3 = 3;
int x04 = x4 = 9; int y04 = y4 = -8; int z04 = z4 = -3;
*/

int x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
int x01 = x1 = 17;int y01 = y1 = -9;int z01 = z1 = 4;
int x02 = x2 = 2; int y02 = y2 = 2; int z02 = z2 = -13;
int x03 = x3 = -1; int y03 = y3 = 5; int z03 = z3 = -1;
int x04 = x4 = 4; int y04 = y4 = 7; int z04 = z4 = -7;

int vx1, vx2, vx3, vx4, vy1, vy2, vy3, vy4, vz1, vz2, vz3, vz4;
int vx01 = vx1 = 0; int vy01 = vy1 = 0; int vz01 = vz1 = 0;
int vx02 = vx2 = 0; int vy02 = vy2 = 0; int vz02 = vz2 = 0;
int vx03 = vx3 = 0; int vy03 = vy3 = 0; int vz03 = vz3 = 0;
int vx04 = vx4 = 0; int vy04 = vy4 = 0; int vz04 = vz4 = 0;


int main()
{
    unsigned long long int countx = 1;
    while(true) {
      vx1 += int(x1 < x2) + int(x1 < x3) + int(x1 < x4);
      vx1 -= int(x1 > x2) + int(x1 > x3) + int(x1 > x4);

      vx2 += int(x2 < x1) + int(x2 < x3) + int(x2 < x4);
      vx2 -= int(x2 > x1) + int(x2 > x3) + int(x2 > x4);

      vx3 += int(x3 < x1) + int(x3 < x2) + int(x3 < x4);
      vx3 -= int(x3 > x1) + int(x3 > x2) + int(x3 > x4);

      vx4 += int(x4 < x1) + int(x4 < x2) + int(x4 < x3);
      vx4 -= int(x4 > x1) + int(x4 > x2) + int(x4 > x3);

      x1 += vx1;
      x2 += vx2;
      x3 += vx3;
      x4 += vx4;

      if (countx % 10000000 == 0) {cout << countx << endl;}
      countx += 1;
      bool match = (x1 == x01) && (x2 == x02) && (x3 == x03) && (x4 == x04);
      if (match) {
        cout << countx << endl;
        break;
      }
    }
    unsigned long long int county = 1;
    while(true) {
      vy4 += int(y4 < y1) + int(y4 < y2) + int(y4 < y3);
      vy4 -= int(y4 > y1) + int(y4 > y2) + int(y4 > y3);

      vy3 += int(y3 < y1) + int(y3 < y2) + int(y3 < y4);
      vy3 -= int(y3 > y1) + int(y3 > y2) + int(y3 > y4);

      vy2 += int(y2 < y1) + int(y2 < y3) + int(y2 < y4);
      vy2 -= int(y2 > y1) + int(y2 > y3) + int(y2 > y4);

      vy1 += int(y1 < y2) + int(y1 < y3) + int(y1 < y4);
      vy1 -= int(y1 > y2) + int(y1 > y3) + int(y1 > y4);

      y1 += vy1;
      y2 += vy2;
      y3 += vy3;
      y4 += vy4;

      if (county % 10000000 == 0) {cout << county << endl;}
      county += 1;
      bool match = (y1 == y01) && (y2 == y02) && (y3 == y03) && (y4 == y04);
      if (match) {
        cout << county << endl;
        break;
      }
    }

    unsigned long long int countz = 1;
    while(true) {

      vz1 += int(z1 < z2) + int(z1 < z3) + int(z1 < z4);
      vz1 -= int(z1 > z2) + int(z1 > z3) + int(z1 > z4);

      vz2 += int(z2 < z1) + int(z2 < z3) + int(z2 < z4);
      vz2 -= int(z2 > z1) + int(z2 > z3) + int(z2 > z4);

      vz3 += int(z3 < z1) + int(z3 < z2) + int(z3 < z4);
      vz3 -= int(z3 > z1) + int(z3 > z2) + int(z3 > z4);

      vz4 += int(z4 < z1) + int(z4 < z2) + int(z4 < z3);
      vz4 -= int(z4 > z1) + int(z4 > z2) + int(z4 > z3);

      z1 += vz1;
      z2 += vz2;
      z3 += vz3;
      z4 += vz4;

      if (countz % 10000000 == 0) {cout << countz << endl;}
      countz += 1;
      bool match = (z1 == z01) && (z2 == z02) && (z3 == z03) && (z4 == z04);
      if (match) {
        cout << countz << endl;
        break;
      }
    }

    cout << std::lcm(countx, std::lcm(county, countz)) << endl;

    // Quit successfully
    return 0;
}
