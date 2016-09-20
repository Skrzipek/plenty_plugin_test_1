<?hh

    namespace plenty_plugin_test_1\controller;

    use Plenty\Plugin\Controller;
    use Plenty\Plugin\Templates\Twig;

    class PluginTestContentController extends Controller
    {
        public function sayFicken(Twig $twig):string
        {
            return $twig->render('PluginTestNr1::ficken.twig');
        }
    }
