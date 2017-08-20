var colors = require('colors');
var inputList = {
  ac_pre_1: "ASCII",
  ac_pre_2: "42",
  ac_pre_3: "#include <iostream>",
  ac_pre_4: "LEAVE_my_symbols#!#&^%_ALONE!!!",
  ac_pre_5: "PPCG Rocks!!! For realz.",
  ac_pre_6: "This example will start with uppercase",
  ac_pre_7: "A1B2"
}
var outputList = {
  ac_post_1: "AsCiI",
  ac_post_2: "42",
  ac_post_3: "#InClUdE <iOsTrEaM>",
  ac_post_4: "LeAvE_mY_sYmBoLs#!#&^%_AlOnE!!!",
  ac_post_5: "PpCg RoCkS!!! fOr ReAlZ.",
  ac_post_6: "ThIs ExAmPlE wIlL sTaRt WiTh UpPeRcAsE",
  ac_post_7: "A1b2"
}

f=(i,c)=>[...i].map(a=>/[a-z]/i.test(a)?((c=!c)?a.toUpperCase():a.toLowerCase()):a).join('')

//Clear the terminal
process.stdout.write('\033c');
for (var i = 1; i < 8; i++) {
  var inputValue = inputList['ac_pre_' + i];
  var outputValue = f(inputValue);
  var expectedOutputValue = outputList['ac_post_' + i];

  console.log("========== Test " + i + "==========")
  console.log("Input:           " + inputValue);
  console.log("Output:          " + outputValue);
  console.log("Expected Output: " + expectedOutputValue);

  if (outputValue != expectedOutputValue) {
    console.log("Status:          " + "FAILED".red + "\n\n");
  } else {
    console.log("Status:          " + "PASSED".green + "\n\n");
  }
}
