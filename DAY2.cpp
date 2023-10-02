int alice = 0, bob = 0; 
        for (int i = 1; i < colors.size() - 1; i++) {
            char curColor = colors[i];
            char prevColor = colors[i - 1];
            char nextColor = colors[i + 1];
            if (curColor == 'A' && prevColor == 'A' && nextColor == 'A')
                alice++; 
            else if (curColor == 'B' && prevColor == 'B' && nextColor == 'B')
                bob++;
        }
        return alice > bob;
