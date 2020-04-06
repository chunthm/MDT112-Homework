String gradeChack(int yourScore) {
  String result;
    if (yourScore >= 85 && yourScore <= 100) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade A.";
    }
    if (yourScore >= 80 && yourScore <= 84) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade B+.";
    }
    if (yourScore >= 75 && yourScore <= 79) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade B.";
    }
    if (yourScore >= 70 && yourScore <= 74) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade C+.";
    }
    if (yourScore >= 65 && yourScore <= 69) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade C.";
    }
    if (yourScore >= 60 && yourScore <= 64) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade D+.";
    }
    if (yourScore >= 55 && yourScore <= 59) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade D.";
    }
    if (yourScore >= 75 && yourScore <= 79) {
    result = "You are " + String(yourScore) + 
    " point from Programming subject.\nYou get grade F.\n See you next semeject.";
    }
  return result;
}
