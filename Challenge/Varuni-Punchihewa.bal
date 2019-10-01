// https://github.com/Varuni-Punchihewa

import ballerina/io;

public function main() {

    int endValue = 100;

    foreach var i in 1...endValue {
        if (i % 3 == 0 && i % 5 == 0) {
            io:println("Spider");
        } else if (i % 3 == 0) {
            io:println("Rat");
        } else if (i % 5 == 0) {
            io:println("Ghost");
        } else {
            io:println(i);
        }
    }
}