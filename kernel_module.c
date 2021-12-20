#include <linux/kernel.h> // Essa biblioteca éextremamente importante, pois éessa biblioteca que carrega as fun��es do Kernel
#include <linux/module.h> // Essa biblioteca éa biblioteca importante para nosso projeto, pois ela érespons�vel por carregar os modulos do Kernel
#include <linux/init.h> // Essa biblioteca é usada para marcar algumas fun��es ou dados inicializados como fun��es de inicializa��o.

MODULE_LICENSE("MARK");
MODULE_AUTHOR("Mark Security");
MODULE_DESCRIPTION("Very basic Kernel Module");
MODULE_VERSION("0.1 Alpha");

// aqui estamos dando inicio a nossa classe init_mod por meio do __init
static int __init init_modsys(void) {
        printk(KERN_INFO "Estou aqui, amigo :)\n");
        return 0;
}

// Aqui estamos encerrando a nossa classe exit_mod por meio do __exit
static void __exit exit_modsys(void) {
        printk(KERN_INFO "Obrigado por ter me encontrado! :)\n");

}

module_init(init_modsys);
module_exit(exit_modsys);


