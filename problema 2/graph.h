/* 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Aluno: Alysson Alexandre de Oliveira Araújo               |
Matricula: 474084                                         |
Turma: Estrutura de dados avançada 2020.1                 |
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/


/* 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Aluno: Alysson Alexandre de Oliveira Araújo               |
Matricula: 474084                                         |
Turma: Estrutura de dados avançada 2020.1                 |
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

#ifndef graph_h
#define graph_h
#include <iostream>
#include <string>
#include <list>

class Edge {
private:
    int vertex; 
    int weight; 
public:
    Edge() { vertex = -1; weight = -1; }
    explicit Edge(int v, int w) { vertex = v; weight = w; }
    int getVertex() const { return vertex; }
    int getWeight() const { return weight; }
    void setVertex(int v) { vertex = v; }
    void setWeight(int w) { weight = w; }
};

/**
 * Graph abstract class. This Abstract Data Type assumes that 
 * the number of vertices is fixed when the graph is created. 
 */
class Graph {
public:
    Graph() {} // Default constructor
    virtual ~Graph() {} // Base destructor

    // Return: the number of vertices and edges respectively
    virtual int n() = 0;
    virtual int m() = 0;

    
    

    
    


    // Return a list containing vertex v's neighbors
    virtual std::list<int>& neighbors(int v) = 0; 

    // Return a list containing v's incident edges
    virtual std::list<Edge>& incidentEdges(int v) = 0;

    // set the weight of an edge 
    // Restriction: an edge cannot have negative weight
    // v1, v2: the vertices
    // wgt: the edge weight
    virtual void setEdgeWeight(int v1, int v2, int wgt) = 0;

    // Add an edge
    virtual void addEdge(int v1, int v2) = 0;

    // Delete an edge
    virtual void delEdge(int v1, int v2) = 0;

    // Determine if an edge is in the graph
    virtual bool isEdge(int v1, int v2) = 0;

    // Return an edge's weight
    // Return the weight of the edge ij or 
    // 0 if the edge does not exists
    virtual int weight(int v1, int v2) = 0;

    // Get and set the mark value for a vertex
    // v: the vertex
    // val: the value to set

    virtual int getMark(int v) = 0;
    
    virtual int getFilho(int v) = 0;
    virtual int getMatrix(int x, int y) = 0;
    virtual int getN() = 0;
    virtual int getFuncionarios(int v) = 0;
     
    
    virtual void setFuncionarios(int v, int x) = 0; 
    virtual void setMark(int v, int value) = 0;
    virtual void setFilho(int f, int p) = 0; //filho no parametro esquerdo, pai no direito
    
    virtual void setNome(std::string pessoa, int pos)=0;
    
    virtual void imprimeNomes() = 0;

    virtual void imprimeChefes() =0;

    virtual int getChefes(int i) = 0;
    virtual bool getConvidados(int i)=0;
    virtual void setConvidados(int i, bool entr) = 0;
    virtual  std::string getNome(int i)=0;
};

#endif