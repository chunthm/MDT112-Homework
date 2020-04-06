String examPassChack(int yourScore, int fullScore) {
  String result;
    double full = fullScore/2;
    if (yourScore >= full) {
    result = "You are" + String(yourScore) + " point from " + String(fullScore) + 
    " point in last exam.\nPass exam Congratulation.";
    }
    if (yourScore<full) {
    result = "You are" + String(yourScore) + "point from " + String(fullScore) +
    " point in last exam.\nFail exam. Attemp again";
    }
  return result;
}
