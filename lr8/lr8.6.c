#include <stdlib.h>
 
typedef struct {
    unsigned int first;
    unsigned int second;
} arc;
 
/* Find out if a vertex has no incoming arcs */
static unsigned int is_root(const arc *graph, const unsigned int *arcs, unsigned int size,
        unsigned int v){
    unsigned int a, root = 1;
    for (a = 0; a < size && root; a++) {
        root = !arcs[a] || graph[a].second != v;
    }
    return root;
}
 
/* Get the vertices with no incoming arcs */
static unsigned int get_roots(const arc *graph, const unsigned int *arcs, unsigned int size,
        unsigned int order, unsigned int *vertices)
{
    unsigned int v, vertices_size = 0;
    for (v = 0; v < order; v++) {
        if (is_root(graph, arcs, size, v)) {
            vertices[v] = 1;
            vertices_size++;
        }
    }
    return vertices_size;
}
 
unsigned int topological_sort(const arc *graph, unsigned int size, unsigned int order, 
        unsigned int **sorted)
{
    unsigned int *vertices = calloc(order, sizeof(unsigned int));
    unsigned int *arcs = malloc(size * sizeof(unsigned int));
    *sorted = malloc(order * sizeof(unsigned int));
    unsigned int v, a, vertices_size, sorted_size = 0,
            arcs_size = size;
    if (!(vertices && arcs && *sorted)) {
        free(vertices);
        free(arcs);
        free(*sorted);
        *sorted = NULL;
        return 0;
    }
    /* All arcs start off in the graph */
    for (a = 0; a < size; a++) {
        arcs[a] = 1;
    }
    /* Get the vertices with no incoming edges */
    vertices_size = get_roots(graph, arcs, size, order, vertices);
    /* Main loop */
    while (vertices_size > 0) {
        /* Get first vertex */
        for (v = 0; vertices[v] != 1; v++);
        /* Remove from vertex set */
        vertices[v] = 0;
        vertices_size--;
        /* Add it to the sorted array */
        (*sorted)[sorted_size++] = v;
        /* Remove all arcs connecting it to its neighbours */
        for (a = 0; a < size; a++) {
            if (arcs[a] && graph[a].first == v) {
                arcs[a] = 0;
                arcs_size--;
                /* Check if neighbour is now a root */
                if (is_root(graph, arcs, size, graph[a].second)) {
                    /* Add it to set of vertices */
                    vertices[graph[a].second] = 1;
                    vertices_size++;
                } 
            }
        }
    }
    free(vertices);
    free(arcs);
    return arcs_size == 0;
}