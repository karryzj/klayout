
DESTDIR = $$OUT_PWD/../..
TARGET = klayout_db

include($$PWD/../../lib.pri)

DEFINES += MAKE_DB_LIBRARY

SOURCES = \
  dbArray.cc \
  dbBox.cc \
  dbBoxConvert.cc \
  dbBoxScanner.cc \
  dbCell.cc \
  dbCellGraphUtils.cc \
  dbCellHullGenerator.cc \
  dbCellInst.cc \
  dbCellMapping.cc \
  dbClipboard.cc \
  dbClipboardData.cc \
  dbClip.cc \
  dbColdProxy.cc \
  dbCommonReader.cc \
  dbCompoundOperation.cc \
  dbEdge.cc \
  dbEdgePair.cc \
  dbEdgePairFilters.cc \
  dbEdgePairRelations.cc \
  dbEdgePairs.cc \
  dbEdgePairsLocalOperations.cc \
  dbEdgePairsUtils.cc \
  dbEdgeProcessor.cc \
  dbEdges.cc \
  dbEdgesLocalOperations.cc \
  dbFillTool.cc \
  dbFuzzyCellMapping.cc \
  dbGenericShapeIterator.cc \
  dbGlyphs.cc \
  dbHershey.cc \
  dbHierProcessor2.cc \
  dbInstances.cc \
  dbInstElement.cc \
  dbLayerMapping.cc \
  dbLayerProperties.cc \
  dbLayout.cc \
  dbLayoutLayers.cc \
  dbLayoutContextHandler.cc \
  dbLayoutDiff.cc \
  dbLayoutQuery.cc \
  dbLayoutStateModel.cc \
  dbLayoutToNetlistSoftConnections.cc \
  dbLayoutUtils.cc \
  dbLibrary.cc \
  dbLibraryManager.cc \
  dbLibraryProxy.cc \
  dbLoadLayoutOptions.cc \
  dbLog.cc \
  dbManager.cc \
  dbMatrix.cc \
  dbMemStatistics.cc \
  dbMutableEdgePairs.cc \
  dbMutableEdges.cc \
  dbMutableRegion.cc \
  dbMutableTexts.cc \
  dbNetlistCompareCore.cc \
  dbNetlistCompareGraph.cc \
  dbNetlistCompareUtils.cc \
  dbNetlistSpiceReaderDelegate.cc \
  dbNetlistSpiceReaderExpressionParser.cc \
  dbObject.cc \
  dbPath.cc \
  dbPCellDeclaration.cc \
  dbPCellHeader.cc \
  dbPCellVariant.cc \
  dbPoint.cc \
  dbPolygon.cc \
  dbPolygonTools.cc \
  dbPolygonGenerators.cc \
  dbPropertiesRepository.cc \
  dbReader.cc \
  dbRecursiveInstanceIterator.cc \
  dbRecursiveShapeIterator.cc \
  dbRegion.cc \
  dbRegionCheckUtils.cc \
  dbRegionLocalOperations.cc \
  dbSaveLayoutOptions.cc \
  dbShape.cc \
  dbShapeFlags.cc \
  dbShapes2.cc \
  dbShapes3.cc \
  dbShapes.cc \
  dbShapeIterator.cc \
  dbShapeProcessor.cc \
  dbStatic.cc \
  dbStream.cc \
  dbStreamLayers.cc \
  dbTechnology.cc \
  dbTestSupport.cc \
  dbText.cc \
  dbTextWriter.cc \
  dbTilingProcessor.cc \
  dbTrans.cc \
  dbTriangle.cc \
  dbTriangles.cc \
  dbUserObject.cc \
  dbUtils.cc \
  dbVector.cc \
  dbWriter.cc \
  dbWriterTools.cc \
  dbVariableWidthPath.cc \
  dbNamedLayerReader.cc \
  dbEdgesToContours.cc \
  dbForceLink.cc \
  dbPlugin.cc \
  dbInit.cc \
  gsiDeclDbBox.cc \
  gsiDeclDbCell.cc \
  gsiDeclDbCellMapping.cc \
  gsiDeclDbCommonStreamOptions.cc \
  gsiDeclDbCompoundOperation.cc \
  gsiDeclDbEdge.cc \
  gsiDeclDbEdgePair.cc \
  gsiDeclDbEdgePairs.cc \
  gsiDeclDbEdgeProcessor.cc \
  gsiDeclDbEdges.cc \
  gsiDeclDbInstElement.cc \
  gsiDeclDbLayerMapping.cc \
  gsiDeclDbLayout.cc \
  gsiDeclDbLayoutUtils.cc \
  gsiDeclDbLayoutQuery.cc \
  gsiDeclDbLibrary.cc \
  gsiDeclDbLog.cc \
  gsiDeclDbManager.cc \
  gsiDeclDbMatrix.cc \
  gsiDeclDbMetaInfo.cc \
  gsiDeclDbPath.cc \
  gsiDeclDbPoint.cc \
  gsiDeclDbPolygon.cc \
  gsiDeclDbReader.cc \
  gsiDeclDbRecursiveInstanceIterator.cc \
  gsiDeclDbRecursiveShapeIterator.cc \
  gsiDeclDbRegion.cc \
  gsiDeclDbShape.cc \
  gsiDeclDbShapeProcessor.cc \
  gsiDeclDbShapes.cc \
  gsiDeclDbTechnologies.cc \
  gsiDeclDbText.cc \
  gsiDeclDbTilingProcessor.cc \
  gsiDeclDbTrans.cc \
  gsiDeclDbUtils.cc \
  gsiDeclDbVector.cc \
  gsiDeclDbLayoutDiff.cc \
  gsiDeclDbGlyphs.cc \
  dbConverters.cc \
  dbAsIfFlatRegion.cc \
  dbEmptyRegion.cc \
  dbFlatRegion.cc \
  dbOriginalLayerRegion.cc \
  dbRegionDelegate.cc \
  dbEdgesDelegate.cc \
  dbEmptyEdges.cc \
  dbAsIfFlatEdges.cc \
  dbFlatEdges.cc \
  dbEdgeBoolean.cc \
  dbOriginalLayerEdges.cc \
  dbAsIfFlatEdgePairs.cc \
  dbEmptyEdgePairs.cc \
  dbFlatEdgePairs.cc \
  dbOriginalLayerEdgePairs.cc \
  dbEdgePairsDelegate.cc \
  dbDeepShapeStore.cc \
  dbHierarchyBuilder.cc \
  dbLocalOperation.cc \
  dbHierProcessor.cc \
  dbDeepRegion.cc \
  dbHierNetworkProcessor.cc \
  dbNetlist.cc \
  gsiDeclDbNetlist.cc \
  dbNetlistDeviceClasses.cc \
  dbNetlistDeviceExtractor.cc \
  dbNetlistExtractor.cc \
  gsiDeclDbNetlistDeviceClasses.cc \
  gsiDeclDbNetlistDeviceExtractor.cc \
  gsiDeclDbHierNetworkProcessor.cc \
  dbNetlistDeviceExtractorClasses.cc \
  dbLayoutToNetlist.cc \
  gsiDeclDbLayoutToNetlist.cc \
  dbCircuit.cc \
  dbDevice.cc \
  dbDeviceClass.cc \
  dbNet.cc \
  dbSubCircuit.cc \
  dbPin.cc \
  dbLayoutToNetlistReader.cc \
  dbLayoutToNetlistWriter.cc \
  dbLayoutToNetlistFormatDefs.cc \
  dbDeviceAbstract.cc \
  dbLocalOperationUtils.cc \
  gsiDeclDbDeepShapeStore.cc \
  dbNetlistSpiceWriter.cc \
  dbNetlistWriter.cc \
  dbCellVariants.cc \
  dbDeepEdges.cc \
  dbDeepEdgePairs.cc \
  dbRegionUtils.cc \
  dbEdgesUtils.cc \
  dbRegionProcessors.cc \
  dbNetlistCompare.cc \
  dbNetlistReader.cc \
  dbNetlistSpiceReader.cc \
  gsiDeclDbNetlistCompare.cc \
  dbNetlistCrossReference.cc \
  dbLayoutVsSchematicWriter.cc \
  dbLayoutVsSchematicReader.cc \
  dbLayoutVsSchematicFormatDefs.cc \
  dbLayoutVsSchematic.cc \
  gsiDeclDbNetlistCrossReference.cc \
  gsiDeclDbLayoutVsSchematic.cc \
  dbNetlistObject.cc \
  gsiDeclDbTexts.cc \
  dbTexts.cc \
  dbDeepTexts.cc \
  dbAsIfFlatTexts.cc \
  dbTextsDelegate.cc \
  dbEmptyTexts.cc \
  dbFlatTexts.cc \
  dbTextsUtils.cc \
  dbOriginalLayerTexts.cc \
  dbNetShape.cc \
  dbShapeCollection.cc \
  gsiDeclDbShapeCollection.cc \
  dbShapeCollectionUtils.cc

HEADERS = \
  dbArray.h \
  dbBoxConvert.h \
  dbBox.h \
  dbBoxScanner.h \
  dbBoxTree.h \
  dbCellGraphUtils.h \
  dbCell.h \
  dbCellHullGenerator.h \
  dbCellInst.h \
  dbCellMapping.h \
  dbClipboardData.h \
  dbClipboard.h \
  dbClip.h \
  dbColdProxy.h \
  dbCommonReader.h \
  dbCompoundOperation.h \
  dbEdge.h \
  dbEdgePair.h \
  dbEdgePairFilters.h \
  dbEdgePairRelations.h \
  dbEdgePairs.h \
  dbEdgePairsLocalOperations.h \
  dbEdgePairsUtils.h \
  dbEdgeProcessor.h \
  dbEdges.h \
  dbEdgesLocalOperations.h \
  dbEdgesToContours.h \
  dbFillTool.h \
  dbFuzzyCellMapping.h \
  dbGenericShapeIterator.h \
  dbHash.h \
  dbHersheyFont.h \
  dbHershey.h \
  dbHierProcessorUtils.h \
  dbInstances.h \
  dbInstElement.h \
  dbLayer.h \
  dbLayerMapping.h \
  dbLayerProperties.h \
  dbLayoutDiff.h \
  dbLayout.h \
  dbLayoutLayers.h \
  dbLayoutQuery.h \
  dbLayoutStateModel.h \
  dbLayoutToNetlistEnums.h \
  dbLayoutToNetlistSoftConnections.h \
  dbLayoutUtils.h \
  dbLibrary.h \
  dbLibraryManager.h \
  dbLibraryProxy.h \
  dbLoadLayoutOptions.h \
  dbLog.h \
  dbManager.h \
  dbMatrix.h \
  dbMemStatistics.h \
  dbMetaInfo.h \
  dbMutableEdgePairs.h \
  dbMutableEdges.h \
  dbMutableRegion.h \
  dbMutableTexts.h \
  dbNetlistCompareCore.h \
  dbNetlistCompareGraph.h \
  dbNetlistCompareUtils.h \
  dbNetlistSpiceReaderDelegate.h \
  dbNetlistSpiceReaderExpressionParser.h \
  dbObject.h \
  dbObjectTag.h \
  dbObjectWithProperties.h \
  dbPath.h \
  dbPCellDeclaration.h \
  dbPCellHeader.h \
  dbPCellVariant.h \
  dbPoint.h \
  dbPolygon.h \
  dbPolygonTools.h \
  dbPolygonGenerators.h \
  dbPropertiesRepository.h \
  dbPropertyConstraint.h \
  dbReader.h \
  dbRecursiveInstanceIterator.h \
  dbRecursiveShapeIterator.h \
  dbRegion.h \
  dbRegionCheckUtils.h \
  dbRegionLocalOperations.h \
  dbSaveLayoutOptions.h \
  dbShape.h \
  dbShapeFlags.h \
  dbShapeRepository.h \
  dbShapes2.h \
  dbShapeProcessor.h \
  dbShapes.h \
  dbStatic.h \
  dbStream.h \
  dbStreamLayers.h \
  dbTestSupport.h \
  dbTechnology.h \
  dbText.h \
  dbTextWriter.h \
  dbTilingProcessor.h \
  dbTrans.h \
  dbTriangle.h \
  dbTriangles.h \
  dbTypes.h \
  dbUserObject.h \
  dbUtils.h \
  dbVector.h \
  dbWriter.h \
  dbWriterTools.h \
  dbGlyphs.h \
  dbCommon.h \
  dbVariableWidthPath.h \
  dbNamedLayerReader.h \
  dbForceLink.h \
  dbPlugin.h \
  dbInit.h \
  dbConverters.h \
  dbAsIfFlatRegion.h \
  dbEmptyRegion.h \
  dbFlatRegion.h \
  dbOriginalLayerRegion.h \
  dbRegionDelegate.h \
  dbEdgesDelegate.h \
  dbEmptyEdges.h \
  dbAsIfFlatEdges.h \
  dbFlatEdges.h \
  dbEdgeBoolean.h \
  dbOriginalLayerEdges.h \
  dbAsIfFlatEdgePairs.h \
  dbEmptyEdgePairs.h \
  dbFlatEdgePairs.h \
  dbOriginalLayerEdgePairs.h \
  dbEdgePairsDelegate.h \
  dbDeepShapeStore.h \
  dbHierarchyBuilder.h \
  dbLocalOperation.h \
  dbHierProcessor.h \
  dbNetlist.h \
  dbNetlistDeviceClasses.h \
  dbNetlistDeviceExtractor.h \
  dbNetlistExtractor.h \
  dbNetlistDeviceExtractorClasses.h \
  dbLayoutToNetlist.h \
  dbHierNetworkProcessor.h \
  dbNetlistUtils.h \
  dbNet.h \
  dbCircuit.h \
  dbDevice.h \
  dbDeviceClass.h \
  dbPin.h \
  dbSubCircuit.h \
  dbLayoutToNetlistReader.h \
  dbLayoutToNetlistWriter.h \
  dbLayoutToNetlistFormatDefs.h \
  dbDeviceAbstract.h \
  dbLocalOperationUtils.h \
  dbDeepRegion.h \
  dbNetlistSpiceWriter.h \
  dbNetlistWriter.h \
  dbCellVariants.h \
  dbDeepEdges.h \
  dbDeepEdgePairs.h \
  dbRegionUtils.h \
  dbEdgesUtils.h \
  dbRegionProcessors.h \
  gsiDeclDbContainerHelpers.h \
  gsiDeclDbHelpers.h \
  dbNetlistCompare.h \
  dbNetlistReader.h \
  dbNetlistSpiceReader.h \
  dbNetlistCrossReference.h \
  dbLayoutVsSchematicWriter.h \
  dbLayoutVsSchematicReader.h \
  dbLayoutVsSchematicFormatDefs.h \
  dbLayoutVsSchematic.h \
  dbNetlistObject.h \
  dbTexts.h \
  dbDeepTexts.h \
  dbAsIfFlatTexts.h \
  dbTextsDelegate.h \
  dbEmptyTexts.h \
  dbFlatTexts.h \
  dbTextsUtils.h \
  dbOriginalLayerTexts.h \
  dbNetShape.h \
  dbShapeCollection.h \
  dbShapeCollectionUtils.h

RESOURCES = \
  dbResources.qrc \

INCLUDEPATH += $$TL_INC $$GSI_INC
DEPENDPATH += $$TL_INC $$GSI_INC
LIBS += -L$$DESTDIR -lklayout_tl -lklayout_gsi

