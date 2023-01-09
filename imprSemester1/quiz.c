int main(void) {
    int i;
    tree_node *tree = NULL;

    for(i = 1; i <= 4; ++i)
        tree = insert_in_binary_search_tree(tree, i*2);
    for(i = 1; i <= 4; ++i)
        tree = insert_in_binary_search_tree(tree, i*2 - 1);

    printf("%d", tree_height(tree));

    exit(EXIT_SUCCESS);
}