class Solution {
  public:
    double maxVolume(double p, double a) {
        double ans = (pow((p-(sqrt(pow(p, 2)-(24 * a))))/12, 2) *
             ((p / 4) - (2 * ((p - (sqrt(pow(p, 2) - (24 * a)))) / 12))));
        return ans;
    }
};
