<?hh

  namespace plenty_plugin_test_1\provider;

  use Plenty\Plugin\RouteServiceProvider;
  use Plenty\Plugin\Routing\Router;

  class PluginTestRouteServiceProvider extends RouteServiceProvider{

      public function map(Router $router):void {
          $router->get('ficken','plenty_plugin_test_1\controller\PluginTestContentController@sayFicken');
      }

  }
