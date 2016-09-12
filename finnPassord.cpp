char table[3];

for (int i = 65; i <= 90; i++) {
  for (int j = 65; j <= 122; j++) {
    for (int k = 65; k <= 122; k++) {
      
      table[0] = char(i);
      table[1] = char(j);
      table[2] = char(k);
    
      cout << table << endl;
      if (Crypto::hex(Crypto::pbkdf2(table, "Saltet til Ola", 2048, 20)) == "ab29d7b5c589e18b52261ecba1d3a7e7cbf212c6") {
        cout << "password is: " << endl;
        cout << table << endl;
        return 0;
        
      }
    }
  }
}