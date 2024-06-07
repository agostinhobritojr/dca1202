#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

// Função para calcular a soma dos elementos de um vetor
long int calcularSoma(const std::vector<long int>& vetor, long int inicio,
                      long int fim) {
  long int soma = 0;
  for (long int i = inicio; i < fim; i++) {
    soma += vetor[i];
  }
  return soma;
}

// Função para calcular a soma dos elementos de um vetor usando threads
long int calcularSomaComThreads(const std::vector<long int>& vetor,
                                long int numThreads) {
  long int tamanho = vetor.size();
  long int elementosPorThread = tamanho / numThreads;

  std::vector<std::thread> threads;
  std::vector<long int> somasParciais(numThreads);

  // Cria as threads e calcula a soma parcial de cada uma
  for (long int i = 0; i < numThreads; i++) {
    long int inicio = i * elementosPorThread;
    long int fim =
        (i == numThreads - 1) ? tamanho : (i + 1) * elementosPorThread;
    // & variaveis capturadas por referencia
    threads.emplace_back([&, inicio, fim, i]() {
      somasParciais[i] = calcularSoma(vetor, inicio, fim);
    });
  }

  // Aguarda todas as threads terminarem
  for (auto& thread : threads) {
    thread.join();
  }

  // Calcula a soma total
  long int somaTotal = 0;
  for (long int i = 0; i < numThreads; i++) {
    somaTotal += somasParciais[i];
  }

  return somaTotal;
}

int main() {
  // Cria um vetor enorme
  std::vector<long int> vetorEnorme;

  for (long int i = 1; i <= 10000000; i++) {
    vetorEnorme.push_back(i);
  }

  int numThreads = 16;

  // Calcula a soma sem threads
  auto startSemThreads = std::chrono::high_resolution_clock::now();
  long int somaSemThreads = calcularSoma(vetorEnorme, 0, vetorEnorme.size());
  auto endSemThreads = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> tempoSemThreads =
      endSemThreads - startSemThreads;

  // Calcula a soma com threads
  auto startComThreads = std::chrono::high_resolution_clock::now();
  long int somaComThreads = calcularSomaComThreads(vetorEnorme, numThreads);
  auto endComThreads = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> tempoComThreads =
      endComThreads - startComThreads;

  std::cout << "Soma sem threads: " << somaSemThreads << std::endl;
  std::cout << "Tempo sem threads: " << tempoSemThreads.count() << " segundos"
            << std::endl;
  std::cout << "Soma com threads: " << somaComThreads << std::endl;
  std::cout << "Tempo com threads: " << tempoComThreads.count() << " segundos"
            << std::endl;

  return 0;
}