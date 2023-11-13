#include <stdio.h>
#include <string.h>
#include <locale.h>

// Definindo a estrutura para representar um produto
struct Produto {
    char nome[50];
    float preco;
};

// Função para validar o login
int validarLogin(char* nome, char* senha) {
    if (strcmp(nome, "mistoquente") == 0 && strcmp(senha, "batatafrita123") == 0) {
        return 1; // Credenciais válidas
    } else {
        return 0; // Credenciais inválidas
    }
}

// Função para cadastrar um produto
void cadastrarProduto(struct Produto* estoque, int* totalProdutos) {
    printf("Digite o nome do produto: ");
    scanf("%s", estoque[*totalProdutos].nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &estoque[*totalProdutos].preco);

    (*totalProdutos)++;
    printf("Produto cadastrado com sucesso!\n");
}

// Função para listar produtos
void listarProdutos(struct Produto* estoque, int totalProdutos) {
    printf("Lista de Produtos:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("%d. Nome: %s, Preço: %.2f\n", i + 1, estoque[i].nome, estoque[i].preco);
    }
}

// Função para comprar produto
void comprarProduto(struct Produto* estoque, int totalProdutos) {
    int escolha;
    listarProdutos(estoque, totalProdutos);

    printf("Digite o número do produto que deseja comprar: ");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= totalProdutos) {
        printf("Você comprou o produto: %s por %.2f\n", estoque[escolha - 1].nome, estoque[escolha - 1].preco);
    } else {
        printf("Opção inválida.\n");
    }
}

// Função para exibir o histórico de compras
void exibirHistoricoCompras() {
    printf("Histórico de Compras:\n");
    // Adicione lógica para exibir histórico de compras se necessário
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int funcao;
    int loginBemSucedido = 0;

    // Estrutura para armazenar produtos
    struct Produto estoque[50];
    int totalProdutos = 0;

    while (1) {
        // Menu
        printf("Selecione uma opção:\n");
        printf("1. Entrar\n");
        printf("2. Sair\n");
        scanf("%d", &funcao);

        switch (funcao) {
            case 1:
                // Loop para solicitar as credenciais até que sejam inseridas corretamente
                while (!loginBemSucedido) {
                    // Receber usuário e senha
                    char usuario[50];
                    char senha[50];

                    printf("Digite seu nome de usuário:\n");
                    scanf("%s", usuario);

                    printf("Digite sua senha:\n");
                    scanf("%s", senha);

                    // Validar o login
                    if (validarLogin(usuario, senha)) {
                        printf("Login bem-sucedido!\n");
                        loginBemSucedido = 1;
                    } else {
                        printf("Login falhou. Credenciais inválidas. Tente novamente.\n");
                    }
                }

                // Após o login bem-sucedido, exibir o menu adicional
                while (loginBemSucedido) {
                    printf("\nMenu Adicional:\n");
                    printf("3. Cadastrar Produto\n");
                    printf("4. Listar Produtos\n");
                    printf("5. Comprar Produto\n");
                    printf("6. Histórico de Compras\n");
                    printf("7. Sair\n");

                    scanf("%d", &funcao);

                    switch (funcao) {
                        case 3:
                            cadastrarProduto(estoque, &totalProdutos);
                            break;

                        case 4:
                            listarProdutos(estoque, totalProdutos);
                            break;

                        case 5:
                            comprarProduto(estoque, totalProdutos);
                            break;

                        case 6:
                            exibirHistoricoCompras();
                            break;

                        case 7:
                            printf("Saindo do programa.\n");
                            return 0; // Encerra o programa

                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                }
                break;

            case 2:
                printf("Saindo do programa.\n");
                return 0; // Encerra o programa

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
