algoritmo "Calculo_IMC"
var
   peso, altura, imc: real

inicio
   escreva("Olá, qual é o seu peso? ")
   leia(peso)

   escreva("E qual é a sua altura? ")
   leia(altura)

   imc <- peso / (altura * altura)

   se (imc < 16) entao
      escreva("BAIXO PESO MUITO GRAVE! Procure um médico IMEDIATAMENTE!")
   senao
      se (imc >= 16) e (imc <= 16.99) entao
         escreva("BAIXO PESO GRAVE! Procure um médico o MAIS RÁPIDO POSSÍVEL!")
      senao
         se (imc >= 17) e (imc <= 18.49) entao
            escreva("BAIXO PESO! Peça orientações a seu nutricionista!")
         senao
            se (imc >= 18.50) e (imc <= 24.99) entao
               escreva("Seu IMC é EXCELENTE! Parabéns!")
            senao
               se (imc >= 25) e (imc <= 29.99) entao
                  escreva("SOBREPESO! Tenha atenção em sua alimentação!")
               senao
                  se (imc >= 30) e (imc <= 34.99) entao
                     escreva("OBESIDADE GRAU I! Atenção, indícios de obesidade! Procure seu médico!")
                  senao
                     se (imc >= 35) e (imc <= 39.99) entao
                        escreva("OBESIDADE GRAU II! Procure um médico nutricionista o MAIS RÁPIDO POSSÍVEL!")
                     senao
                        escreva("OBESIDADE GRAU III! Sua situação é de risco! Procure um médico IMEDIATAMENTE")
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

fimalgoritmo
