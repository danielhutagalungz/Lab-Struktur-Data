system("cls");
    // Membuat root
    Node* root = new Node();
    root->data = 15;
    root->kiri = NULL;
    root->kanan = NULL;

    // Membuat anak kiri
    root->kiri = new Node();
    root->kiri->data = 27;
    root->kiri->kiri = NULL;
    root->kiri->kanan = NULL;
    
    // Mmebuat anak kanan
    root->kanan = new Node();
    root->kanan->data = 30;
    root->kanan->kiri = NULL;
    root->kanan->kanan = NULL;

    // Membuat anak kiri dari 27
    root->kiri->kiri = new Node();
    root->kiri->kiri->data = 25;
    root->kiri->kiri->kiri = NULL;
    root->kiri->kiri->kanan = NULL;
    
    // Membuat anak kanan dari 27
    root->kiri->kanan = new Node();
    root->kiri->kanan->data = 29;
    root->kiri->kiri->kiri = NULL;
    root->kiri->kiri->kanan = NULL;