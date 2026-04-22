{
  description = "tree-sitter grammar for PowerON";

  inputs = {
    nixpkgs.url = "https://flakehub.com/f/NixOS/nixpkgs/0.1.*";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        packages.default = pkgs.tree-sitter.buildGrammar {
          language = "poweron";
          version = "1.0.12";
          generate = true;
          src = ./.;
        };

        devShells.default = pkgs.mkShell {
          packages = [
            pkgs.tree-sitter
            pkgs.nodejs
            pkgs.gcc
            pkgs.gnumake
          ];

          shellHook = ''
            echo "tree-sitter-poweron dev shell"
            echo "  tree-sitter generate  -- regenerate parser from grammar.js"
            echo "  tree-sitter test      -- run corpus tests"
            echo "  make                  -- build C library (libtree-sitter-poweron.{a,so})"
          '';
        };
      }
    );
}
